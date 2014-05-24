Fractalcoin 1.7
=====================

* Copyright (c) 2009-2014 Bitcoin Developers
* Copyright (c) 2011-2013 Litecoin Developers
* Copyright (c) 2013-2014 Fractalcoin Developers


Setup
---------------------
[Fractalcoin Core](http://fractalcoin.com/en/download) is the original Fractalcoin client and it builds the backbone of the network. However, it downloads and stores the entire history of Fractalcoin transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Fractalcoin on your native platform. 

### Unix

You need the Qt4 run-time libraries to run Fractalcoin-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/fractalcoin-qt (GUI, 32-bit) or bin/32/fractalcoind (headless, 32-bit)
- bin/64/fractalcoin-qt (GUI, 64-bit) or bin/64/fractalcoind (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run fractalcoin-qt.exe.

### OSX

Drag Fractalcoin-Qt to your applications folder, and then run Fractalcoin-Qt.

### Need Help?

* See the documentation at the [Fractalcoin Wiki](http://fractalco.in/)
for help and more information.
* Ask for help on [#fractalcoin](http://webchat.freenode.net?channels=fractalcoin) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=fractalcoin).
* Ask for help on the [/r/fractalducation subreddit](http://reddit.com/r/fractalducation).

Building
---------------------
The following are developer notes on how to build Fractalcoin on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-msw.md)

Development
---------------------
The Fractalcoin repo's [root README](https://github.com/fractalcoin/fractalcoin/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Coding Guidelines](coding.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/bitcoin/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

### Resources
* Discuss on the [/r/fractalcoindev](http://www.reddit.com/r/fractalcoindev) subreddit.
* Discuss on [#fractalcoin-dev](http://webchat.freenode.net/?channels=fractalcoin-dev) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=fractalcoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
