
Debian
====================
This directory contains files used to package mitcoind/mitcoin-qt
for Debian-based Linux systems. If you compile mitcoind/mitcoin-qt yourself, there are some useful files here.

## mitcoin: URI support ##


mitcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mitcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mitcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/mitcoin128.png` to `/usr/share/pixmaps`

mitcoin-qt.protocol (KDE)

