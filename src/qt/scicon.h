// Copyright (c) 2014 The mitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef mitcoin_QT_SCICON_H
#define mitcoin_QT_SCICON_H

#include <QtCore>

QT_BEGIN_NAMESPACE
class QColor;
class QIcon;
class QString;
QT_END_NAMESPACE

QImage SingleColorImage(const QString& filename, const QColor&);
QIcon SingleColorIcon(const QIcon&, const QColor&);
QIcon SingleColorIcon(const QString& filename, const QColor&);
QColor SingleColor();
QIcon SingleColorIcon(const QString& filename);
QIcon TextColorIcon(const QIcon&);
QIcon TextColorIcon(const QString& filename);

#endif // mitcoin_QT_SCICON_H
