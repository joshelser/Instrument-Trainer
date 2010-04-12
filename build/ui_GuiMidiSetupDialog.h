/********************************************************************************
** Form generated from reading UI file 'GuiMidiSetupDialog.ui'
**
** Created: Thu Feb 11 11:36:19 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIMIDISETUPDIALOG_H
#define UI_GUIMIDISETUPDIALOG_H

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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiMidiSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *midiSetupTabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *midiInfoText;
    QGridLayout *_2;
    QLabel *label;
    QComboBox *midiInputCombo;
    QLabel *label_2;
    QComboBox *midiOutputCombo;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QListWidget *soundFontList;
    QVBoxLayout *verticalLayout_5;
    QPushButton *fluidAddButton;
    QPushButton *fluidRemoveButton;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *fluidSettingsGroupBox;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLineEdit *audioDeviceLineEdit;
    QLabel *label_7;
    QLabel *label_18;
    QSpinBox *masterGainSpin;
    QLabel *label_8;
    QComboBox *audioDriverCombo;
    QLabel *label_9;
    QComboBox *sampleRateCombo;
    QLabel *label_3;
    QSpinBox *bufferSizeSpin;
    QLabel *label_4;
    QSpinBox *bufferCountsSpin;
    QCheckBox *reverbCheck;
    QCheckBox *chorusCheck;
    QWidget *tab_3;
    QPushButton *latencyFixButton;
    QLabel *latencyFixLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GuiMidiSettingsDialog)
    {
        if (GuiMidiSettingsDialog->objectName().isEmpty())
            GuiMidiSettingsDialog->setObjectName(QString::fromUtf8("GuiMidiSettingsDialog"));
        GuiMidiSettingsDialog->resize(465, 369);
        verticalLayout = new QVBoxLayout(GuiMidiSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        midiSetupTabWidget = new QTabWidget(GuiMidiSettingsDialog);
        midiSetupTabWidget->setObjectName(QString::fromUtf8("midiSetupTabWidget"));
        midiSetupTabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(396, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        midiInfoText = new QTextEdit(groupBox);
        midiInfoText->setObjectName(QString::fromUtf8("midiInfoText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(midiInfoText->sizePolicy().hasHeightForWidth());
        midiInfoText->setSizePolicy(sizePolicy);
        midiInfoText->setMaximumSize(QSize(16777215, 100));
        midiInfoText->setAcceptDrops(false);
        midiInfoText->setReadOnly(true);

        verticalLayout_2->addWidget(midiInfoText);

        _2 = new QGridLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _2->addWidget(label, 0, 0, 1, 1);

        midiInputCombo = new QComboBox(groupBox);
        midiInputCombo->setObjectName(QString::fromUtf8("midiInputCombo"));

        _2->addWidget(midiInputCombo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        _2->addWidget(label_2, 1, 0, 1, 1);

        midiOutputCombo = new QComboBox(groupBox);
        midiOutputCombo->setObjectName(QString::fromUtf8("midiOutputCombo"));

        _2->addWidget(midiOutputCombo, 1, 1, 1, 1);


        verticalLayout_2->addLayout(_2);


        verticalLayout_6->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(396, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        midiSetupTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        soundFontList = new QListWidget(groupBox_3);
        soundFontList->setObjectName(QString::fromUtf8("soundFontList"));

        horizontalLayout->addWidget(soundFontList);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        fluidAddButton = new QPushButton(groupBox_3);
        fluidAddButton->setObjectName(QString::fromUtf8("fluidAddButton"));

        verticalLayout_5->addWidget(fluidAddButton);

        fluidRemoveButton = new QPushButton(groupBox_3);
        fluidRemoveButton->setObjectName(QString::fromUtf8("fluidRemoveButton"));

        verticalLayout_5->addWidget(fluidRemoveButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_3);

        fluidSettingsGroupBox = new QGroupBox(tab_2);
        fluidSettingsGroupBox->setObjectName(QString::fromUtf8("fluidSettingsGroupBox"));
        verticalLayout_4 = new QVBoxLayout(fluidSettingsGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        audioDeviceLineEdit = new QLineEdit(fluidSettingsGroupBox);
        audioDeviceLineEdit->setObjectName(QString::fromUtf8("audioDeviceLineEdit"));
        audioDeviceLineEdit->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(audioDeviceLineEdit, 1, 4, 1, 1);

        label_7 = new QLabel(fluidSettingsGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        label_18 = new QLabel(fluidSettingsGroupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_18, 0, 0, 1, 1);

        masterGainSpin = new QSpinBox(fluidSettingsGroupBox);
        masterGainSpin->setObjectName(QString::fromUtf8("masterGainSpin"));

        gridLayout->addWidget(masterGainSpin, 0, 1, 1, 1);

        label_8 = new QLabel(fluidSettingsGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        audioDriverCombo = new QComboBox(fluidSettingsGroupBox);
        audioDriverCombo->setObjectName(QString::fromUtf8("audioDriverCombo"));

        gridLayout->addWidget(audioDriverCombo, 0, 4, 1, 1);

        label_9 = new QLabel(fluidSettingsGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 2, 2, 1, 1);

        sampleRateCombo = new QComboBox(fluidSettingsGroupBox);
        sampleRateCombo->setObjectName(QString::fromUtf8("sampleRateCombo"));

        gridLayout->addWidget(sampleRateCombo, 2, 4, 1, 1);

        label_3 = new QLabel(fluidSettingsGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        bufferSizeSpin = new QSpinBox(fluidSettingsGroupBox);
        bufferSizeSpin->setObjectName(QString::fromUtf8("bufferSizeSpin"));

        gridLayout->addWidget(bufferSizeSpin, 1, 1, 1, 1);

        label_4 = new QLabel(fluidSettingsGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        bufferCountsSpin = new QSpinBox(fluidSettingsGroupBox);
        bufferCountsSpin->setObjectName(QString::fromUtf8("bufferCountsSpin"));

        gridLayout->addWidget(bufferCountsSpin, 2, 1, 1, 1);

        reverbCheck = new QCheckBox(fluidSettingsGroupBox);
        reverbCheck->setObjectName(QString::fromUtf8("reverbCheck"));

        gridLayout->addWidget(reverbCheck, 3, 0, 1, 1);

        chorusCheck = new QCheckBox(fluidSettingsGroupBox);
        chorusCheck->setObjectName(QString::fromUtf8("chorusCheck"));

        gridLayout->addWidget(chorusCheck, 3, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_3->addWidget(fluidSettingsGroupBox);

        midiSetupTabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        latencyFixButton = new QPushButton(tab_3);
        latencyFixButton->setObjectName(QString::fromUtf8("latencyFixButton"));
        latencyFixButton->setGeometry(QRect(40, 120, 121, 29));
        latencyFixLabel = new QLabel(tab_3);
        latencyFixLabel->setObjectName(QString::fromUtf8("latencyFixLabel"));
        latencyFixLabel->setGeometry(QRect(200, 130, 195, 17));
        latencyFixLabel->setAlignment(Qt::AlignCenter);
        midiSetupTabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(midiSetupTabWidget);

        buttonBox = new QDialogButtonBox(GuiMidiSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        midiSetupTabWidget->raise();

        retranslateUi(GuiMidiSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), GuiMidiSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GuiMidiSettingsDialog, SLOT(reject()));

        midiSetupTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GuiMidiSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *GuiMidiSettingsDialog)
    {
        GuiMidiSettingsDialog->setWindowTitle(QApplication::translate("GuiMidiSettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GuiMidiSettingsDialog", "Select the MIDI devices", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GuiMidiSettingsDialog", "Midi Input Device:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GuiMidiSettingsDialog", "Midi Output Device:", 0, QApplication::UnicodeUTF8));
        midiSetupTabWidget->setTabText(midiSetupTabWidget->indexOf(tab), QApplication::translate("GuiMidiSettingsDialog", "MIDI input && output", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("GuiMidiSettingsDialog", "Sound Fonts", 0, QApplication::UnicodeUTF8));
        fluidAddButton->setText(QApplication::translate("GuiMidiSettingsDialog", "Add", 0, QApplication::UnicodeUTF8));
        fluidRemoveButton->setText(QApplication::translate("GuiMidiSettingsDialog", "Remove", 0, QApplication::UnicodeUTF8));
        fluidSettingsGroupBox->setTitle(QApplication::translate("GuiMidiSettingsDialog", "Settings", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GuiMidiSettingsDialog", "Audio Device:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("GuiMidiSettingsDialog", "Master Gain:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GuiMidiSettingsDialog", "Audio Driver:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("GuiMidiSettingsDialog", "Sample Rate:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GuiMidiSettingsDialog", "Bufer Size", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GuiMidiSettingsDialog", "Buffer counts", 0, QApplication::UnicodeUTF8));
        reverbCheck->setText(QApplication::translate("GuiMidiSettingsDialog", "Reverb", 0, QApplication::UnicodeUTF8));
        chorusCheck->setText(QApplication::translate("GuiMidiSettingsDialog", "Chorus", 0, QApplication::UnicodeUTF8));
        midiSetupTabWidget->setTabText(midiSetupTabWidget->indexOf(tab_2), QApplication::translate("GuiMidiSettingsDialog", "FluidSynth", 0, QApplication::UnicodeUTF8));
        latencyFixButton->setText(QApplication::translate("GuiMidiSettingsDialog", "Latency", 0, QApplication::UnicodeUTF8));
        latencyFixLabel->setText(QApplication::translate("GuiMidiSettingsDialog", "0 (msec)", 0, QApplication::UnicodeUTF8));
        midiSetupTabWidget->setTabText(midiSetupTabWidget->indexOf(tab_3), QApplication::translate("GuiMidiSettingsDialog", "Latency Fix", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiMidiSettingsDialog: public Ui_GuiMidiSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIMIDISETUPDIALOG_H
