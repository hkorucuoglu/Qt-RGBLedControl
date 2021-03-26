/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *red_label;
    QLabel *green_label;
    QLabel *blue_label;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QSlider *red_slider;
    QSlider *green_slider;
    QSlider *blue_slider;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *red_value_label;
    QLabel *green_value_label;
    QLabel *blue_value_label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(606, 167);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 159, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        red_label = new QLabel(layoutWidget);
        red_label->setObjectName(QString::fromUtf8("red_label"));
        red_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(red_label);

        green_label = new QLabel(layoutWidget);
        green_label->setObjectName(QString::fromUtf8("green_label"));
        green_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(green_label);

        blue_label = new QLabel(layoutWidget);
        blue_label->setObjectName(QString::fromUtf8("blue_label"));
        blue_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(blue_label);

        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(180, 10, 311, 141));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        red_slider = new QSlider(layoutWidget_2);
        red_slider->setObjectName(QString::fromUtf8("red_slider"));
        red_slider->setMaximum(255);
        red_slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(red_slider);

        green_slider = new QSlider(layoutWidget_2);
        green_slider->setObjectName(QString::fromUtf8("green_slider"));
        green_slider->setMaximum(255);
        green_slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(green_slider);

        blue_slider = new QSlider(layoutWidget_2);
        blue_slider->setObjectName(QString::fromUtf8("blue_slider"));
        blue_slider->setMaximum(255);
        blue_slider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(blue_slider);

        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(500, 10, 91, 141));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        red_value_label = new QLabel(layoutWidget_3);
        red_value_label->setObjectName(QString::fromUtf8("red_value_label"));

        verticalLayout_6->addWidget(red_value_label);

        green_value_label = new QLabel(layoutWidget_3);
        green_value_label->setObjectName(QString::fromUtf8("green_value_label"));

        verticalLayout_6->addWidget(green_value_label);

        blue_value_label = new QLabel(layoutWidget_3);
        blue_value_label->setObjectName(QString::fromUtf8("blue_value_label"));

        verticalLayout_6->addWidget(blue_value_label);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        red_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#ff0000;\">Red LED</span></p></body></html>", nullptr));
        green_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#00ff00;\">Green LED</span></p></body></html>", nullptr));
        blue_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Blue LED</span></p></body></html>", nullptr));
        red_value_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        green_value_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        blue_value_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
