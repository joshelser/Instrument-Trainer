/********************************************************************************
** Form generated from reading UI file 'GuiTopBar.ui'
**
** Created: Thu Feb 11 11:36:19 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUITOPBAR_H
#define UI_GUITOPBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiTopBar
{
public:
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QPushButton *playFromStartButton;
    QPushButton *playButton;
    QLabel *label_2;
    QSpinBox *speedSpin;
    QLabel *label_5;
    QComboBox *keyCombo;
    QComboBox *majorCombo;
    QLabel *label;
    QSpinBox *transposeSpin;
    QToolButton *loopingBarsPopupButton;
    QLabel *label_3;
    QDoubleSpinBox *startBarSpin;
    QPushButton *saveBarButton;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *GuiTopBar)
    {
        if (GuiTopBar->objectName().isEmpty())
            GuiTopBar->setObjectName(QString::fromUtf8("GuiTopBar"));
        GuiTopBar->resize(839, 34);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GuiTopBar->sizePolicy().hasHeightForWidth());
        GuiTopBar->setSizePolicy(sizePolicy);
        GuiTopBar->setMinimumSize(QSize(0, 34));
        GuiTopBar->setMaximumSize(QSize(524287, 524287));
        hboxLayout = new QHBoxLayout(GuiTopBar);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetMaximumSize);
        hboxLayout->setContentsMargins(-1, 0, -1, 0);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setSizeConstraint(QLayout::SetFixedSize);
        playFromStartButton = new QPushButton(GuiTopBar);
        playFromStartButton->setObjectName(QString::fromUtf8("playFromStartButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/play-from-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        playFromStartButton->setIcon(icon);
        playFromStartButton->setIconSize(QSize(24, 24));
        playFromStartButton->setCheckable(false);

        hboxLayout1->addWidget(playFromStartButton);

        playButton = new QPushButton(GuiTopBar);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon1);
        playButton->setIconSize(QSize(24, 24));
        playButton->setCheckable(false);

        hboxLayout1->addWidget(playButton);

        label_2 = new QLabel(GuiTopBar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        speedSpin = new QSpinBox(GuiTopBar);
        speedSpin->setObjectName(QString::fromUtf8("speedSpin"));

        hboxLayout1->addWidget(speedSpin);

        label_5 = new QLabel(GuiTopBar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout1->addWidget(label_5);

        keyCombo = new QComboBox(GuiTopBar);
        keyCombo->setObjectName(QString::fromUtf8("keyCombo"));

        hboxLayout1->addWidget(keyCombo);

        majorCombo = new QComboBox(GuiTopBar);
        majorCombo->setObjectName(QString::fromUtf8("majorCombo"));

        hboxLayout1->addWidget(majorCombo);

        label = new QLabel(GuiTopBar);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout1->addWidget(label);

        transposeSpin = new QSpinBox(GuiTopBar);
        transposeSpin->setObjectName(QString::fromUtf8("transposeSpin"));

        hboxLayout1->addWidget(transposeSpin);

        loopingBarsPopupButton = new QToolButton(GuiTopBar);
        loopingBarsPopupButton->setObjectName(QString::fromUtf8("loopingBarsPopupButton"));
        loopingBarsPopupButton->setIconSize(QSize(12, 24));
        loopingBarsPopupButton->setCheckable(true);
        loopingBarsPopupButton->setArrowType(Qt::DownArrow);

        hboxLayout1->addWidget(loopingBarsPopupButton);

        label_3 = new QLabel(GuiTopBar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        startBarSpin = new QDoubleSpinBox(GuiTopBar);
        startBarSpin->setObjectName(QString::fromUtf8("startBarSpin"));
        startBarSpin->setDecimals(1);
        startBarSpin->setMaximum(999.9);

        hboxLayout1->addWidget(startBarSpin);

        saveBarButton = new QPushButton(GuiTopBar);
        saveBarButton->setObjectName(QString::fromUtf8("saveBarButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/flag.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBarButton->setIcon(icon2);
        saveBarButton->setIconSize(QSize(24, 24));

        hboxLayout1->addWidget(saveBarButton);

        spacerItem = new QSpacerItem(0, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(hboxLayout1);


        retranslateUi(GuiTopBar);

        QMetaObject::connectSlotsByName(GuiTopBar);
    } // setupUi

    void retranslateUi(QWidget *GuiTopBar)
    {
        GuiTopBar->setWindowTitle(QApplication::translate("GuiTopBar", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        playFromStartButton->setToolTip(QApplication::translate("GuiTopBar", "Start playing music from the start", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        playFromStartButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("GuiTopBar", "Start and stop playing music", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        playButton->setText(QString());
        label_2->setText(QApplication::translate("GuiTopBar", "Speed:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GuiTopBar", "Key:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GuiTopBar", "Transpose:", 0, QApplication::UnicodeUTF8));
        loopingBarsPopupButton->setText(QString());
        label_3->setText(QApplication::translate("GuiTopBar", "Start Bar:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        saveBarButton->setToolTip(QApplication::translate("GuiTopBar", "Save this Bar Number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveBarButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GuiTopBar: public Ui_GuiTopBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUITOPBAR_H
