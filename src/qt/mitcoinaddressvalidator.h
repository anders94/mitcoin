// Copyright (c) 2011-2014 The mitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef mitcoin_QT_mitcoinADDRESSVALIDATOR_H
#define mitcoin_QT_mitcoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class mitcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit mitcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** mitcoin address widget validator, checks for a valid mitcoin address.
 */
class mitcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit mitcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // mitcoin_QT_mitcoinADDRESSVALIDATOR_H
