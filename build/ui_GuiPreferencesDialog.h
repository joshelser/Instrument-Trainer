/********************************************************************************
** Form generated from reading UI file 'GuiPreferencesDialog.ui'
**
** Created: Thu Feb 11 11:36:19 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPREFERENCESDIALOG_H
#define UI_GUIPREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GuiPreferencesDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QCheckBox *timingMarkersCheck;
    QLabel *label;
    QComboBox *followStopPointCombo;
    QSpacerItem *horizontalSpacer;
    QCheckBox *showNoteNamesCheck;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *courtesyAccidentalsCheck;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *videoOptimiseCheck;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GuiPreferencesDialog)
    {
        if (GuiPreferencesDialog->objectName().isEmpty())
            GuiPreferencesDialog->setObjectName(QString::fromUtf8("GuiPreferencesDialog"));
        GuiPreferencesDialog->resize(362, 267);
        verticalLayout_2 = new QVBoxLayout(GuiPreferencesDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(GuiPreferencesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        timingMarkersCheck = new QCheckBox(groupBox_2);
        timingMarkersCheck->setObjectName(QString::fromUtf8("timingMarkersCheck"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timingMarkersCheck->sizePolicy().hasHeightForWidth());
        timingMarkersCheck->setSizePolicy(sizePolicy);

        gridLayout->addWidget(timingMarkersCheck, 2, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        followStopPointCombo = new QComboBox(groupBox_2);
        followStopPointCombo->setObjectName(QString::fromUtf8("followStopPointCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(followStopPointCombo->sizePolicy().hasHeightForWidth());
        followStopPointCombo->setSizePolicy(sizePolicy1);
        followStopPointCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(followStopPointCombo, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        showNoteNamesCheck = new QCheckBox(groupBox_2);
        showNoteNamesCheck->setObjectName(QString::fromUtf8("showNoteNamesCheck"));

        gridLayout->addWidget(showNoteNamesCheck, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        courtesyAccidentalsCheck = new QCheckBox(groupBox_2);
        courtesyAccidentalsCheck->setObjectName(QString::fromUtf8("courtesyAccidentalsCheck"));

        gridLayout->addWidget(courtesyAccidentalsCheck, 1, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(GuiPreferencesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        videoOptimiseCheck = new QCheckBox(groupBox);
        videoOptimiseCheck->setObjectName(QString::fromUtf8("videoOptimiseCheck"));

        verticalLayout->addWidget(videoOptimiseCheck);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(GuiPreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(GuiPreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GuiPreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GuiPreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GuiPreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiPreferencesDialog)
    {
        GuiPreferencesDialog->setWindowTitle(QApplication::translate("GuiPreferencesDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GuiPreferencesDialog", "Score Settings", 0, QApplication::UnicodeUTF8));
        timingMarkersCheck->setText(QApplication::translate("GuiPreferencesDialog", "Timing Markers", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GuiPreferencesDialog", "Follow stop point:", 0, QApplication::UnicodeUTF8));
        showNoteNamesCheck->setText(QApplication::translate("GuiPreferencesDialog", "Show Note Names", 0, QApplication::UnicodeUTF8));
        courtesyAccidentalsCheck->setText(QApplication::translate("GuiPreferencesDialog", "Courtesy Accidentals", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GuiPreferencesDialog", "Video  Settings", 0, QApplication::UnicodeUTF8));
        videoOptimiseCheck->setText(QApplication::translate("GuiPreferencesDialog", "Video optimisation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiPreferencesDialog: public Ui_GuiPreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPREFERENCESDIALOG_H
