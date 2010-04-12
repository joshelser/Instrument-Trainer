/********************************************************************************
** Form generated from reading UI file 'GuiLoopingPopup.ui'
**
** Created: Thu Feb 11 11:36:14 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUILOOPINGPOPUP_H
#define UI_GUILOOPINGPOPUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiLoopingPopup
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDoubleSpinBox *loopBarsSpin;
    QLabel *loopingText;

    void setupUi(QWidget *GuiLoopingPopup)
    {
        if (GuiLoopingPopup->objectName().isEmpty())
            GuiLoopingPopup->setObjectName(QString::fromUtf8("GuiLoopingPopup"));
        GuiLoopingPopup->resize(157, 70);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GuiLoopingPopup->sizePolicy().hasHeightForWidth());
        GuiLoopingPopup->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GuiLoopingPopup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(-1, 2, -1, 4);
        label_3 = new QLabel(GuiLoopingPopup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_3);

        loopBarsSpin = new QDoubleSpinBox(GuiLoopingPopup);
        loopBarsSpin->setObjectName(QString::fromUtf8("loopBarsSpin"));
        loopBarsSpin->setMaximumSize(QSize(62, 16777215));
        loopBarsSpin->setFrame(true);
        loopBarsSpin->setDecimals(1);
        loopBarsSpin->setMaximum(99.9);

        horizontalLayout->addWidget(loopBarsSpin);


        verticalLayout->addLayout(horizontalLayout);

        loopingText = new QLabel(GuiLoopingPopup);
        loopingText->setObjectName(QString::fromUtf8("loopingText"));

        verticalLayout->addWidget(loopingText);


        retranslateUi(GuiLoopingPopup);

        QMetaObject::connectSlotsByName(GuiLoopingPopup);
    } // setupUi

    void retranslateUi(QWidget *GuiLoopingPopup)
    {
        GuiLoopingPopup->setWindowTitle(QApplication::translate("GuiLoopingPopup", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GuiLoopingPopup", "Repeat Bars:", 0, QApplication::UnicodeUTF8));
        loopingText->setText(QApplication::translate("GuiLoopingPopup", "End bar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiLoopingPopup: public Ui_GuiLoopingPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUILOOPINGPOPUP_H
