#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/mitcoin.png
ICON_DST=../../src/qt/res/icons/mitcoin.ico
convert ${ICON_SRC} -resize 16x16 mitcoin-16.png
convert ${ICON_SRC} -resize 32x32 mitcoin-32.png
convert ${ICON_SRC} -resize 48x48 mitcoin-48.png
convert mitcoin-16.png mitcoin-32.png mitcoin-48.png ${ICON_DST}

