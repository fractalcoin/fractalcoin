// Copyright (c) 2013-2079 Dr. Kimoto Chan
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
// upstream from https://github.com/grumpycoin/grumpycoin-v.1.2

#include "net.h"
#include "key.h"
#include "alert.h"
#include "base58.h"
#include "sendalert.h"
#include "rpcserver.h"

static const int64_t DAYS = 24 * 60 * 60;

CSendAlert::CSendAlert()
{
    return;
}

CSendAlert::~CSendAlert()
{
    return;
}

void CSendAlert::Test(string message, string pKey)
{
    CAlert alert;
    alert.nRelayUntil   = GetTime() + 15*60;
    alert.nExpiration   = GetTime() + DAYS*4;
    alert.nID           = 1007;
    alert.nCancel       = 1006;   // cancels previous messages up to this ID number
    alert.nMinVer       = 0;
    alert.nMaxVer       = 100000;
    alert.nPriority     = 5000;
    alert.strComment    = "";
    alert.strStatusBar  = message;

    // Sign
    string strSecret = pKey;
    CDataStream sMsg(SER_NETWORK, PROTOCOL_VERSION);
    sMsg << *(CUnsignedAlert*)&alert;
    alert.vchMsg = std::vector<unsigned char>(sMsg.begin(), sMsg.end());

    CBitcoinSecret vchSecret;
    bool fGood = vchSecret.SetString(strSecret);
    if (!fGood)
        throw runtime_error("Invalid private key");
    CKey key = vchSecret.GetKey();

    if (!key.Sign(Hash(alert.vchMsg.begin(), alert.vchMsg.end()), alert.vchSig))
        throw runtime_error("ThreadSendAlert() : key.Sign failed");

    // Test
    CDataStream sBuffer(SER_NETWORK, PROTOCOL_VERSION);
    sBuffer << alert;
    CAlert alert2;
    sBuffer >> alert2;
    if (!alert2.CheckSignature())
        throw runtime_error("ThreadSendAlert() : CheckSignature failed");
    assert(alert2.vchMsg == alert.vchMsg);
    assert(alert2.vchSig == alert.vchSig);
    alert.SetNull();

    //Check
    while (vNodes.size() < 1) {
		boost::this_thread::interruption_point();
        MilliSleep(500);
	}
	boost::this_thread::interruption_point();

    // Send
    int nSent = 0;

    BOOST_FOREACH(CNode* pnode, vNodes)
    {
        if (alert2.RelayTo(pnode))
             nSent++;
    }
}