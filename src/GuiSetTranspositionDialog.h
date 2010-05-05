/*********************************************************************************/
/*!
@file           GuiSetTranspositionDialog.h

@brief          xxxx.

@author         L. J. Barman

    Copyright (c)   2008-2009, L. J. Barman, all rights reserved

    This file is part of the PianoBooster application

    PianoBooster is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    PianoBooster is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PianoBooster.  If not, see <http://www.gnu.org/licenses/>.

*/
/*********************************************************************************/

#ifndef __GUISETTRANSPOSITIONDIALOG_H__
#define __GUISETTRANSPOSITIONDIALOG_H__


#include <QtGui>

#include "Song.h"
#include "Settings.h"


#include "ui_GuiSetTranspositionDialog.h"

class CGLView;

class GuiSetTranspositionDialog : public QDialog, private Ui::GuiSetTranspositionDialog
{
    Q_OBJECT

public:
    GuiSetTranspositionDialog(QWidget *parent = 0);
    void init(CSettings* settings);

private slots:
    void accept();
    /* void on_transposeUp_clicked(); */
    /* void on_transposeDown_clicked(); */
    void on_transpositionSpin_valueChanged(int value);
    void on_clefCombo_activated(int index);

private:
    void updateTranspositionText();

    CSettings* m_settings;
};

#endif //__GUISETTRANSPOSITIONDIALOG_H__
