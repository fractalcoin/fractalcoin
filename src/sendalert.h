// Copyright (c) 2013-2079 Dr. Kimoto Chan
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
// upstream from https://github.com/grumpycoin/grumpycoin-v.1.2

#ifndef SENDALERT_H
#define SENDALERT_H

using namespace std;

class CSendAlert
{
public:
    CSendAlert();
    ~CSendAlert();

    void Test(string message, string pKey);
};

#endif // SENDALERT_H