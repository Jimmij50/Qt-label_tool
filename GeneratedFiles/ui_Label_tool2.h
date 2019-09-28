/********************************************************************************
** Form generated from reading UI file 'Label_tool2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABEL_TOOL2_H
#define UI_LABEL_TOOL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_Label_tool2Class
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QRadioButton *radio_point;
    QRadioButton *radio_rect;
    QLabel *label;
    QPushButton *b_open;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *label_edit;
    QPushButton *b_savedir;
    QPushButton *b_saveimg;
    QCheckBox *checkBox_saved;
    QGroupBox *groupBox_3;
    mylabel *img_label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_previous;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *b_next;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QLabel *text;
    mylabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Label_tool2Class)
    {
        if (Label_tool2Class->objectName().isEmpty())
            Label_tool2Class->setObjectName(QString::fromUtf8("Label_tool2Class"));
        Label_tool2Class->resize(1757, 1260);
        centralWidget = new QWidget(Label_tool2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(860, 100, 281, 531));
        radio_point = new QRadioButton(groupBox_2);
        radio_point->setObjectName(QString::fromUtf8("radio_point"));
        radio_point->setGeometry(QRect(10, 70, 102, 19));
        radio_rect = new QRadioButton(groupBox_2);
        radio_rect->setObjectName(QString::fromUtf8("radio_rect"));
        radio_rect->setGeometry(QRect(10, 130, 102, 19));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 101, 31));
        b_open = new QPushButton(groupBox_2);
        b_open->setObjectName(QString::fromUtf8("b_open"));
        b_open->setGeometry(QRect(20, 430, 93, 28));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(140, 70, 120, 231));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 229));
        plainTextEdit = new QPlainTextEdit(scrollAreaWidgetContents);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 104, 41));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_edit = new QLineEdit(groupBox_2);
        label_edit->setObjectName(QString::fromUtf8("label_edit"));
        label_edit->setGeometry(QRect(70, 330, 113, 20));
        b_savedir = new QPushButton(groupBox_2);
        b_savedir->setObjectName(QString::fromUtf8("b_savedir"));
        b_savedir->setGeometry(QRect(150, 430, 93, 28));
        b_saveimg = new QPushButton(groupBox_2);
        b_saveimg->setObjectName(QString::fromUtf8("b_saveimg"));
        b_saveimg->setGeometry(QRect(80, 500, 93, 28));
        checkBox_saved = new QCheckBox(groupBox_2);
        checkBox_saved->setObjectName(QString::fromUtf8("checkBox_saved"));
        checkBox_saved->setGeometry(QRect(200, 510, 79, 19));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 20, 761, 681));
        img_label = new mylabel(groupBox_3);
        img_label->setObjectName(QString::fromUtf8("img_label"));
        img_label->setGeometry(QRect(110, 20, 531, 241));
        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 520, 621, 131));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_previous = new QPushButton(groupBox);
        b_previous->setObjectName(QString::fromUtf8("b_previous"));

        horizontalLayout->addWidget(b_previous);

        horizontalSpacer_3 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        b_next = new QPushButton(groupBox);
        b_next->setObjectName(QString::fromUtf8("b_next"));

        horizontalLayout->addWidget(b_next);

        horizontalSpacer_2 = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        line_2 = new QFrame(groupBox_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(40, 480, 691, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        text = new QLabel(centralWidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setGeometry(QRect(900, 30, 291, 51));
        label_2 = new mylabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 830, 931, 231));
        Label_tool2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Label_tool2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1757, 22));
        Label_tool2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Label_tool2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Label_tool2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Label_tool2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Label_tool2Class->setStatusBar(statusBar);

        retranslateUi(Label_tool2Class);

        QMetaObject::connectSlotsByName(Label_tool2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Label_tool2Class)
    {
        Label_tool2Class->setWindowTitle(QApplication::translate("Label_tool2Class", "Label_tool2", nullptr));
        groupBox_2->setTitle(QApplication::translate("Label_tool2Class", "GroupBox", nullptr));
        radio_point->setText(QApplication::translate("Label_tool2Class", "point", nullptr));
        radio_rect->setText(QApplication::translate("Label_tool2Class", "Rect", nullptr));
        label->setText(QApplication::translate("Label_tool2Class", "Mode", nullptr));
        b_open->setText(QApplication::translate("Label_tool2Class", "Open File", nullptr));
        b_savedir->setText(QApplication::translate("Label_tool2Class", "Save_dir", nullptr));
        b_saveimg->setText(QApplication::translate("Label_tool2Class", "Save_img", nullptr));
        checkBox_saved->setText(QApplication::translate("Label_tool2Class", "saved", nullptr));
        groupBox_3->setTitle(QApplication::translate("Label_tool2Class", "GroupBox", nullptr));
        img_label->setText(QString());
        groupBox->setTitle(QApplication::translate("Label_tool2Class", "GroupBox", nullptr));
        b_previous->setText(QApplication::translate("Label_tool2Class", "Previous", nullptr));
        b_next->setText(QApplication::translate("Label_tool2Class", "Next", nullptr));
        text->setText(QApplication::translate("Label_tool2Class", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Label_tool2Class", "Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Label_tool2Class: public Ui_Label_tool2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABEL_TOOL2_H
