/********************************************************************************
** Form generated from reading UI file 'GuiSidePanel.ui'
**
** Created: Thu Feb 11 11:36:19 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISIDEPANEL_H
#define UI_GUISIDEPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiSidePanel
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *bookCombo;
    QLabel *label_2;
    QComboBox *songCombo;
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QRadioButton *listenRadio;
    QRadioButton *followYouRadio;
    QRadioButton *playAlongRadio;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout2;
    QRadioButton *rightHandRadio;
    QRadioButton *bothHandsRadio;
    QRadioButton *leftHandRadio;
    QSlider *pianoSlider;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout3;
    QHBoxLayout *hboxLayout2;
    QListWidget *trackListWidget;
    QSlider *boostSlider;
    QCheckBox *muteYourPartCheck;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *GuiSidePanel)
    {
        if (GuiSidePanel->objectName().isEmpty())
            GuiSidePanel->setObjectName(QString::fromUtf8("GuiSidePanel"));
        GuiSidePanel->resize(255, 424);
        GuiSidePanel->setMaximumSize(QSize(255, 16777215));
        vboxLayout = new QVBoxLayout(GuiSidePanel);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 4, 9, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(GuiSidePanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        bookCombo = new QComboBox(GuiSidePanel);
        bookCombo->setObjectName(QString::fromUtf8("bookCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bookCombo->sizePolicy().hasHeightForWidth());
        bookCombo->setSizePolicy(sizePolicy);
        bookCombo->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(bookCombo, 0, 1, 1, 1);

        label_2 = new QLabel(GuiSidePanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        songCombo = new QComboBox(GuiSidePanel);
        songCombo->setObjectName(QString::fromUtf8("songCombo"));
        sizePolicy.setHeightForWidth(songCombo->sizePolicy().hasHeightForWidth());
        songCombo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(songCombo, 1, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox_2 = new QGroupBox(GuiSidePanel);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        listenRadio = new QRadioButton(groupBox_2);
        listenRadio->setObjectName(QString::fromUtf8("listenRadio"));

        vboxLayout1->addWidget(listenRadio);

        followYouRadio = new QRadioButton(groupBox_2);
        followYouRadio->setObjectName(QString::fromUtf8("followYouRadio"));

        vboxLayout1->addWidget(followYouRadio);

        playAlongRadio = new QRadioButton(groupBox_2);
        playAlongRadio->setObjectName(QString::fromUtf8("playAlongRadio"));

        vboxLayout1->addWidget(playAlongRadio);


        hboxLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(GuiSidePanel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        hboxLayout1 = new QHBoxLayout(groupBox);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        rightHandRadio = new QRadioButton(groupBox);
        rightHandRadio->setObjectName(QString::fromUtf8("rightHandRadio"));

        vboxLayout2->addWidget(rightHandRadio);

        bothHandsRadio = new QRadioButton(groupBox);
        bothHandsRadio->setObjectName(QString::fromUtf8("bothHandsRadio"));

        vboxLayout2->addWidget(bothHandsRadio);

        leftHandRadio = new QRadioButton(groupBox);
        leftHandRadio->setObjectName(QString::fromUtf8("leftHandRadio"));

        vboxLayout2->addWidget(leftHandRadio);


        hboxLayout1->addLayout(vboxLayout2);

        pianoSlider = new QSlider(groupBox);
        pianoSlider->setObjectName(QString::fromUtf8("pianoSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pianoSlider->sizePolicy().hasHeightForWidth());
        pianoSlider->setSizePolicy(sizePolicy2);
        pianoSlider->setOrientation(Qt::Vertical);
        pianoSlider->setTickPosition(QSlider::TicksBelow);
        pianoSlider->setTickInterval(25);

        hboxLayout1->addWidget(pianoSlider);


        hboxLayout->addWidget(groupBox);


        vboxLayout->addLayout(hboxLayout);

        groupBox_3 = new QGroupBox(GuiSidePanel);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        vboxLayout3 = new QVBoxLayout(groupBox_3);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        trackListWidget = new QListWidget(groupBox_3);
        trackListWidget->setObjectName(QString::fromUtf8("trackListWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(trackListWidget->sizePolicy().hasHeightForWidth());
        trackListWidget->setSizePolicy(sizePolicy3);
        trackListWidget->setMinimumSize(QSize(180, 0));
        trackListWidget->setMaximumSize(QSize(300, 500));

        hboxLayout2->addWidget(trackListWidget);

        boostSlider = new QSlider(groupBox_3);
        boostSlider->setObjectName(QString::fromUtf8("boostSlider"));
        boostSlider->setOrientation(Qt::Vertical);
        boostSlider->setTickPosition(QSlider::TicksBelow);
        boostSlider->setTickInterval(25);

        hboxLayout2->addWidget(boostSlider);


        vboxLayout3->addLayout(hboxLayout2);

        muteYourPartCheck = new QCheckBox(groupBox_3);
        muteYourPartCheck->setObjectName(QString::fromUtf8("muteYourPartCheck"));

        vboxLayout3->addWidget(muteYourPartCheck);


        vboxLayout->addWidget(groupBox_3);

        spacerItem = new QSpacerItem(100, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(GuiSidePanel);

        QMetaObject::connectSlotsByName(GuiSidePanel);
    } // setupUi

    void retranslateUi(QWidget *GuiSidePanel)
    {
        GuiSidePanel->setWindowTitle(QApplication::translate("GuiSidePanel", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GuiSidePanel", "Book:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GuiSidePanel", "Song:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GuiSidePanel", "Skill", 0, QApplication::UnicodeUTF8));
        listenRadio->setText(QApplication::translate("GuiSidePanel", "Listen", 0, QApplication::UnicodeUTF8));
        followYouRadio->setText(QApplication::translate("GuiSidePanel", "Follow you", 0, QApplication::UnicodeUTF8));
        playAlongRadio->setText(QApplication::translate("GuiSidePanel", "Play Along", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GuiSidePanel", "Hands", 0, QApplication::UnicodeUTF8));
        rightHandRadio->setText(QApplication::translate("GuiSidePanel", "Right", 0, QApplication::UnicodeUTF8));
        bothHandsRadio->setText(QApplication::translate("GuiSidePanel", "Both", 0, QApplication::UnicodeUTF8));
        leftHandRadio->setText(QApplication::translate("GuiSidePanel", "Left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pianoSlider->setToolTip(QApplication::translate("GuiSidePanel", "Adjust the volume of your piano", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("GuiSidePanel", "Parts", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        boostSlider->setToolTip(QApplication::translate("GuiSidePanel", "Adjust the volume of the selected part", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        muteYourPartCheck->setToolTip(QApplication::translate("GuiSidePanel", "Mute the currently selected part", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        muteYourPartCheck->setText(QApplication::translate("GuiSidePanel", "Mute your part when playing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiSidePanel: public Ui_GuiSidePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISIDEPANEL_H
