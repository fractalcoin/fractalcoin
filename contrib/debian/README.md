
Debian
====================
This directory contains files used to package fractalcoind/fractalcoin-qt
for Debian-based Linux systems. If you compile fractalcoind/fractalcoin-qt yourself, there are some useful files here.

## fractalcoin: URI support ##


fractalcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fractalcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fractalcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/fractalcoin128.png` to `/usr/share/pixmaps`

fractalcoin-qt.protocol (KDE)

