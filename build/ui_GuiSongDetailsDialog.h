/********************************************************************************
** Form generated from reading UI file 'GuiSongDetailsDialog.ui'
**
** Created: Thu Feb 11 11:36:19 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISONGDETAILSDIALOG_H
#define UI_GUISONGDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GuiSongDetailsDialog
{
public:
    QVBoxLayout *_2;
    QTextEdit *songInfoText;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *rightHandChannelCombo;
    QLabel *label_2;
    QComboBox *leftHandChannelCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GuiSongDetailsDialog)
    {
        if (GuiSongDetailsDialog->objectName().isEmpty())
            GuiSongDetailsDialog->setObjectName(QString::fromUtf8("GuiSongDetailsDialog"));
        GuiSongDetailsDialog->resize(388, 265);
        _2 = new QVBoxLayout(GuiSongDetailsDialog);
        _2->setObjectName(QString::fromUtf8("_2"));
        songInfoText = new QTextEdit(GuiSongDetailsDialog);
        songInfoText->setObjectName(QString::fromUtf8("songInfoText"));

        _2->addWidget(songInfoText);

        groupBox_2 = new QGroupBox(GuiSongDetailsDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(false);

        verticalLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        rightHandChannelCombo = new QComboBox(groupBox_2);
        rightHandChannelCombo->setObjectName(QString::fromUtf8("rightHandChannelCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rightHandChannelCombo->sizePolicy().hasHeightForWidth());
        rightHandChannelCombo->setSizePolicy(sizePolicy);
        rightHandChannelCombo->setMinimumSize(QSize(180, 0));

        gridLayout->addWidget(rightHandChannelCombo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leftHandChannelCombo = new QComboBox(groupBox_2);
        leftHandChannelCombo->setObjectName(QString::fromUtf8("leftHandChannelCombo"));
        sizePolicy.setHeightForWidth(leftHandChannelCombo->sizePolicy().hasHeightForWidth());
        leftHandChannelCombo->setSizePolicy(sizePolicy);
        leftHandChannelCombo->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(leftHandChannelCombo, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        _2->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(GuiSongDetailsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        _2->addWidget(buttonBox);


        retranslateUi(GuiSongDetailsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GuiSongDetailsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GuiSongDetailsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GuiSongDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiSongDetailsDialog)
    {
        GuiSongDetailsDialog->setWindowTitle(QApplication::translate("GuiSongDetailsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GuiSongDetailsDialog", " Song Details", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GuiSongDetailsDialog", "MIDI Channels for left and right hand piano parts:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GuiSongDetailsDialog", "Right Hand MIDI Channel:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GuiSongDetailsDialog", "Left Hand MIDI Channel:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiSongDetailsDialog: public Ui_GuiSongDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISONGDETAILSDIALOG_H
