# Fractalcoin Core [FRAC]
==========================

![Fractalcoin](http://i.imgur.com/LCv2wcn.png)

## What is Fractalcoin?
Fractalcoin is a cryptocurrency like Bitcoin, although with many key differences. Fractalcoin's wallet is forked from Bitcoin 0.9.2, and thus has a build process slightly different from most altcoins.

## Features

The key features of Fractalcoin:

* X11 Proof of work (low power, cool hardware, ASIC resistant, etc)
* One minute block times
* Digishield is used initially for difficulty adjustment. After block 40352, Slingshield is used for difficulty adjustment
* 90% of coins are minted in the first 28 days of mining (hence, very slow inflation rate after 28 days)
* 1 Million coins total
* After 28 days, mandatory transaction fees of 0.1-0.5%, to ensure mining remains profitable without coin supply inflation
* Checkpoint enabled
* Geographically diverse DNS seed nodes, to ensure fast wallet syncs
* Small 0.5% premine


http://fractalco.in/

## License
Fractalcoin is released under the terms of the MIT license. See [COPYING](COPYING)
for more information or see http://opensource.org/licenses/MIT.

## Development and contributions
Development is ongoing and the development team as well as other volunteers can freely work in their own trees and submit pull requests when features or bug fixes are ready.


## Reward Schedule

The reward schedule is very fast and vigurous, in order to get the high rate of inflation out of the way as soon as possible.

* 1st block:  5000 FRAC, premined for support and development
* 2-31: 0 FRAC, zero reward blocks to allow for a fair launch with no instamining while difficulty catches up to network
* 32-1471 (1 day): 40 FRAC, to spur excitement for the first day of mining
* 1472-20191 (13 days): 20 FRAC
* 20192-22500(~2 days): 10 FRAC
* 22501-22860(6 hours): 20 FRAC bonus round for forking
* 22861-38912(~11 days): 10 FRAC
* 38913-40352(1 day): 40 FRAC, to give people that missed out on the first day of mining a final chance to get big blocks
* 40353-318230(about 221 days): 1 FRAC (percentage based transaction fees should make it so that average reward is closer to 5-15 coins)
* 318231 and up: 0 FRAC (again, percentage fees mean that significant rewards will still be seen)

## Slingshield

Digishield is used for difficulty adjustment when mining resembles a typical proof-of-work coin. However, when percentage fees kick in and the static rewards drop, a modified version of digishield will be used, thus named slingshield. 

For blocks with no transactions, slingshield is exactly the same as digishield. Low rewards and percentage based fees could put loyal miners at a disadvantage, since multipools could swoop in when a high fee transaction is broadcast, and quickly mine the block, taking all of the fees from loyal miners without contributing significantly to network security or overall hashrate. 

Slingshield fixes this problem while helping to enable a multipool's variable contribution to make the network signficantly more secure. 

When a transaction is broadcast, and the amount of fees would increase the static block reward by 2%, the difficulty of the block being mined is increased by 1%. When the fee would increase block reward by 3%, difficulty is raised by 2%, etc. This ensures that high reward blocks (when multipools would typically hop on, but soon after leave) have a difficulty reflective of the expected hashrate. 

Along with ensuring mining remains fair and block times remain constant, slingshield also increases difficulty in conducting a double spend(or other attack) by leveraging the variable amount of power contributed by multipools. This effectively ensures that to double spend a large amount of coins, you would need not 51% of the hashing power of the network, but rather up to 71% of the network.  

A double spend with slingshield is made difficult because the malicious fork will require up to 20% more hashing power than the legitimate fork, but because of transaction fees, the legitimate fork will have no problem attracting multipools to mine the block quickly. 

Slingshield is the **only** difficulty adjustment algorithm to increase network security by leveraging the profit hunting nature of multipools, while keeping things fair for loyal miners as well. 

## Percentage based fees

To ensure mining stays profitable after rewards drop significantly, percentage based fees of 0.1% to 0.5%(depending on the exact structure) are charged on all transactions. 

This helps to ensure Slingshield works as expected, ensures the network stays strong, and distributes wealth in a fair manner without inflation.

## Low inflation

After 28 days, Fractalcoin's inflation rate drops to around 16%/year, and somewhere in that year, the inflation rate actually drops to zero. Fractalcoin's very fast schedule to zero inflation ensures that the price will stay stable, while percentage based transaction fees ensure that it will forever have a strong network.  


##  Building fractalcoind/fractalcoin-cli/fractalcoin-qt

  The following are developer notes on how to build Fractalcoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

  - [OSX Build Notes](doc/build-osx.md)
  - [Unix Build Notes](doc/build-unix.md)
  - [Windows Build Notes](doc/build-msw.md)

## Network ports

* RPC 33111
* P2P 33112

