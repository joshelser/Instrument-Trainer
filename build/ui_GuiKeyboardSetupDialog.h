/********************************************************************************
** Form generated from reading UI file 'GuiKeyboardSetupDialog.ui'
**
** Created: Thu Feb 11 11:36:19 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIKEYBOARDSETUPDIALOG_H
#define UI_GUIKEYBOARDSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GuiKeyboardSetupDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QTextEdit *keyboardInfoText;
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *rightSoundCombo;
    QLabel *rightVolumeLabel;
    QHBoxLayout *hboxLayout2;
    QSpinBox *rightVolumeSpin;
    QSpacerItem *spacerItem;
    QPushButton *rightTestButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout3;
    QGridLayout *gridLayout1;
    QLabel *label;
    QComboBox *wrongSoundCombo;
    QLabel *wrongVolumeLabel;
    QHBoxLayout *hboxLayout4;
    QSpinBox *wrongVolumeSpin;
    QSpacerItem *spacerItem1;
    QPushButton *wrongTestButton;
    QGroupBox *groupBox_4;
    QHBoxLayout *hboxLayout5;
    QLabel *label_6;
    QLineEdit *lowestNoteEdit;
    QSpacerItem *spacerItem2;
    QLabel *label_7;
    QLineEdit *highestNoteEdit;
    QSpacerItem *spacerItem3;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GuiKeyboardSetupDialog)
    {
        if (GuiKeyboardSetupDialog->objectName().isEmpty())
            GuiKeyboardSetupDialog->setObjectName(QString::fromUtf8("GuiKeyboardSetupDialog"));
        GuiKeyboardSetupDialog->resize(501, 348);
        GuiKeyboardSetupDialog->setMaximumSize(QSize(501, 16777215));
        vboxLayout = new QVBoxLayout(GuiKeyboardSetupDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(GuiKeyboardSetupDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        keyboardInfoText = new QTextEdit(groupBox);
        keyboardInfoText->setObjectName(QString::fromUtf8("keyboardInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keyboardInfoText->sizePolicy().hasHeightForWidth());
        keyboardInfoText->setSizePolicy(sizePolicy);
        keyboardInfoText->setMaximumSize(QSize(16777215, 60));
        keyboardInfoText->setAcceptDrops(false);
        keyboardInfoText->setReadOnly(true);

        vboxLayout1->addWidget(keyboardInfoText);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout1 = new QHBoxLayout(groupBox_3);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        rightSoundCombo = new QComboBox(groupBox_3);
        rightSoundCombo->setObjectName(QString::fromUtf8("rightSoundCombo"));
        rightSoundCombo->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(rightSoundCombo, 0, 1, 1, 1);

        rightVolumeLabel = new QLabel(groupBox_3);
        rightVolumeLabel->setObjectName(QString::fromUtf8("rightVolumeLabel"));

        gridLayout->addWidget(rightVolumeLabel, 1, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        rightVolumeSpin = new QSpinBox(groupBox_3);
        rightVolumeSpin->setObjectName(QString::fromUtf8("rightVolumeSpin"));
        rightVolumeSpin->setMinimum(1);
        rightVolumeSpin->setMaximum(200);
        rightVolumeSpin->setValue(100);

        hboxLayout2->addWidget(rightVolumeSpin);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        rightTestButton = new QPushButton(groupBox_3);
        rightTestButton->setObjectName(QString::fromUtf8("rightTestButton"));

        hboxLayout2->addWidget(rightTestButton);


        gridLayout->addLayout(hboxLayout2, 1, 1, 1, 1);


        hboxLayout1->addLayout(gridLayout);


        hboxLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout3 = new QHBoxLayout(groupBox_2);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        wrongSoundCombo = new QComboBox(groupBox_2);
        wrongSoundCombo->setObjectName(QString::fromUtf8("wrongSoundCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wrongSoundCombo->sizePolicy().hasHeightForWidth());
        wrongSoundCombo->setSizePolicy(sizePolicy1);
        wrongSoundCombo->setMinimumSize(QSize(200, 0));

        gridLayout1->addWidget(wrongSoundCombo, 0, 1, 2, 1);

        wrongVolumeLabel = new QLabel(groupBox_2);
        wrongVolumeLabel->setObjectName(QString::fromUtf8("wrongVolumeLabel"));

        gridLayout1->addWidget(wrongVolumeLabel, 1, 0, 2, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        wrongVolumeSpin = new QSpinBox(groupBox_2);
        wrongVolumeSpin->setObjectName(QString::fromUtf8("wrongVolumeSpin"));
        wrongVolumeSpin->setMinimum(1);
        wrongVolumeSpin->setMaximum(200);
        wrongVolumeSpin->setValue(100);

        hboxLayout4->addWidget(wrongVolumeSpin);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem1);

        wrongTestButton = new QPushButton(groupBox_2);
        wrongTestButton->setObjectName(QString::fromUtf8("wrongTestButton"));

        hboxLayout4->addWidget(wrongTestButton);


        gridLayout1->addLayout(hboxLayout4, 2, 1, 1, 1);


        hboxLayout3->addLayout(gridLayout1);


        hboxLayout->addWidget(groupBox_2);


        vboxLayout1->addLayout(hboxLayout);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        hboxLayout5 = new QHBoxLayout(groupBox_4);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout5->addWidget(label_6);

        lowestNoteEdit = new QLineEdit(groupBox_4);
        lowestNoteEdit->setObjectName(QString::fromUtf8("lowestNoteEdit"));
        lowestNoteEdit->setMaximumSize(QSize(60, 16777215));

        hboxLayout5->addWidget(lowestNoteEdit);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem2);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        hboxLayout5->addWidget(label_7);

        highestNoteEdit = new QLineEdit(groupBox_4);
        highestNoteEdit->setObjectName(QString::fromUtf8("highestNoteEdit"));
        highestNoteEdit->setMaximumSize(QSize(60, 16777215));

        hboxLayout5->addWidget(highestNoteEdit);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem3);

        resetButton = new QPushButton(groupBox_4);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        hboxLayout5->addWidget(resetButton);


        vboxLayout1->addWidget(groupBox_4);


        vboxLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(GuiKeyboardSetupDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(GuiKeyboardSetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GuiKeyboardSetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GuiKeyboardSetupDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GuiKeyboardSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiKeyboardSetupDialog)
    {
        GuiKeyboardSetupDialog->setWindowTitle(QApplication::translate("GuiKeyboardSetupDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GuiKeyboardSetupDialog", "Setup Your Piano Keyboard", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("GuiKeyboardSetupDialog", "Right Notes", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GuiKeyboardSetupDialog", "sound:", 0, QApplication::UnicodeUTF8));
        rightVolumeLabel->setText(QApplication::translate("GuiKeyboardSetupDialog", "volume:", 0, QApplication::UnicodeUTF8));
        rightVolumeSpin->setSuffix(QApplication::translate("GuiKeyboardSetupDialog", "%", 0, QApplication::UnicodeUTF8));
        rightTestButton->setText(QApplication::translate("GuiKeyboardSetupDialog", "Test", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GuiKeyboardSetupDialog", "Wrong Notes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GuiKeyboardSetupDialog", "sound:", 0, QApplication::UnicodeUTF8));
        wrongVolumeLabel->setText(QApplication::translate("GuiKeyboardSetupDialog", "volume:", 0, QApplication::UnicodeUTF8));
        wrongVolumeSpin->setSuffix(QApplication::translate("GuiKeyboardSetupDialog", "%", 0, QApplication::UnicodeUTF8));
        wrongTestButton->setText(QApplication::translate("GuiKeyboardSetupDialog", "Test", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("GuiKeyboardSetupDialog", "Keyboard Note Range", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GuiKeyboardSetupDialog", "Lowest Note:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lowestNoteEdit->setToolTip(QApplication::translate("GuiKeyboardSetupDialog", "The note number between 0 and 127", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lowestNoteEdit->setInputMask(QApplication::translate("GuiKeyboardSetupDialog", "000; ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GuiKeyboardSetupDialog", "Highest Note:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        highestNoteEdit->setToolTip(QApplication::translate("GuiKeyboardSetupDialog", "The note number between 0 and 127", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        highestNoteEdit->setInputMask(QApplication::translate("GuiKeyboardSetupDialog", "000; ", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("GuiKeyboardSetupDialog", "Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiKeyboardSetupDialog: public Ui_GuiKeyboardSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIKEYBOARDSETUPDIALOG_H
