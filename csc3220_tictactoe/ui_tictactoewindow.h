/********************************************************************************
** Form generated from reading UI file 'tictactoewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOEWINDOW_H
#define UI_TICTACTOEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToeWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *board00;
    QPushButton *board01;
    QPushButton *board02;
    QPushButton *board12;
    QPushButton *board10;
    QPushButton *board11;
    QPushButton *board22;
    QPushButton *board20;
    QPushButton *board21;
    QLabel *IBStatusLabel;
    QGroupBox *groupBox_2;
    QLabel *boardLabel;
    QLineEdit *rowInput;
    QLineEdit *colInput;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *TBStatusLabel;
    QPushButton *resetButton;
    QPushButton *aiHardButton;
    QPushButton *aiEasyButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TicTacToeWindow)
    {
        if (TicTacToeWindow->objectName().isEmpty())
            TicTacToeWindow->setObjectName(QString::fromUtf8("TicTacToeWindow"));
        TicTacToeWindow->resize(711, 437);
        TicTacToeWindow->setStyleSheet(QString::fromUtf8("\n"
"QWidget{\n"
"	background-color: white;\n"
"}\n"
"QGroupBox{\n"
"	border: 2px solid #38d39f;\n"
"	background-color: 	#E8E8E8;\n"
"}\n"
"QGroupBox QLabel{\n"
"	background-color: 	#E8E8E8;\n"
"}\n"
"QPushButton{\n"
" background-color: #38d39f;\n"
"font-size: 14px;\n"
"}"));
        centralWidget = new QWidget(TicTacToeWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 341, 311));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        board00 = new QPushButton(groupBox);
        board00->setObjectName(QString::fromUtf8("board00"));
        board00->setGeometry(QRect(70, 40, 61, 61));
        board01 = new QPushButton(groupBox);
        board01->setObjectName(QString::fromUtf8("board01"));
        board01->setGeometry(QRect(140, 40, 61, 61));
        board02 = new QPushButton(groupBox);
        board02->setObjectName(QString::fromUtf8("board02"));
        board02->setGeometry(QRect(210, 40, 61, 61));
        board12 = new QPushButton(groupBox);
        board12->setObjectName(QString::fromUtf8("board12"));
        board12->setGeometry(QRect(210, 110, 61, 61));
        board10 = new QPushButton(groupBox);
        board10->setObjectName(QString::fromUtf8("board10"));
        board10->setGeometry(QRect(70, 110, 61, 61));
        board11 = new QPushButton(groupBox);
        board11->setObjectName(QString::fromUtf8("board11"));
        board11->setGeometry(QRect(140, 110, 61, 61));
        board22 = new QPushButton(groupBox);
        board22->setObjectName(QString::fromUtf8("board22"));
        board22->setGeometry(QRect(210, 180, 61, 61));
        board20 = new QPushButton(groupBox);
        board20->setObjectName(QString::fromUtf8("board20"));
        board20->setGeometry(QRect(70, 180, 61, 61));
        board21 = new QPushButton(groupBox);
        board21->setObjectName(QString::fromUtf8("board21"));
        board21->setGeometry(QRect(140, 180, 61, 61));
        IBStatusLabel = new QLabel(groupBox);
        IBStatusLabel->setObjectName(QString::fromUtf8("IBStatusLabel"));
        IBStatusLabel->setGeometry(QRect(30, 260, 281, 31));
        QFont font;
        font.setPointSize(18);
        IBStatusLabel->setFont(font);
        IBStatusLabel->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 20, 341, 311));
        boardLabel = new QLabel(groupBox_2);
        boardLabel->setObjectName(QString::fromUtf8("boardLabel"));
        boardLabel->setGeometry(QRect(80, 30, 181, 161));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(30);
        boardLabel->setFont(font1);
        boardLabel->setAlignment(Qt::AlignCenter);
        rowInput = new QLineEdit(groupBox_2);
        rowInput->setObjectName(QString::fromUtf8("rowInput"));
        rowInput->setGeometry(QRect(140, 190, 61, 21));
        colInput = new QLineEdit(groupBox_2);
        colInput->setObjectName(QString::fromUtf8("colInput"));
        colInput->setGeometry(QRect(140, 220, 61, 21));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 190, 61, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 220, 61, 21));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 200, 61, 31));
        TBStatusLabel = new QLabel(groupBox_2);
        TBStatusLabel->setObjectName(QString::fromUtf8("TBStatusLabel"));
        TBStatusLabel->setGeometry(QRect(30, 260, 281, 31));
        TBStatusLabel->setFont(font);
        TBStatusLabel->setAlignment(Qt::AlignCenter);
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(280, 340, 151, 31));
        aiHardButton = new QPushButton(centralWidget);
        aiHardButton->setObjectName(QString::fromUtf8("aiHardButton"));
        aiHardButton->setGeometry(QRect(120, 340, 151, 31));
        aiEasyButton = new QPushButton(centralWidget);
        aiEasyButton->setObjectName(QString::fromUtf8("aiEasyButton"));
        aiEasyButton->setGeometry(QRect(440, 340, 151, 31));
        TicTacToeWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TicTacToeWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 711, 17));
        TicTacToeWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TicTacToeWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TicTacToeWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TicTacToeWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TicTacToeWindow->setStatusBar(statusBar);

        retranslateUi(TicTacToeWindow);

        QMetaObject::connectSlotsByName(TicTacToeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToeWindow)
    {
        TicTacToeWindow->setWindowTitle(QApplication::translate("TicTacToeWindow", "TicTacToeWindow", nullptr));
        groupBox->setTitle(QString());
        board00->setText(QString());
        board01->setText(QString());
        board02->setText(QString());
        board12->setText(QString());
        board10->setText(QString());
        board11->setText(QString());
        board22->setText(QString());
        board20->setText(QString());
        board21->setText(QString());
        IBStatusLabel->setText(QApplication::translate("TicTacToeWindow", "Interactive Button Tic-Tac-Toe", nullptr));
        groupBox_2->setTitle(QString());
        boardLabel->setText(QApplication::translate("TicTacToeWindow", "<html><head/><body><p>---<br/>---<br/>---</p></body></html>", nullptr));
        label->setText(QApplication::translate("TicTacToeWindow", "Row (0-2)", nullptr));
        label_2->setText(QApplication::translate("TicTacToeWindow", "Col (0-2)", nullptr));
        pushButton->setText(QApplication::translate("TicTacToeWindow", "Update", nullptr));
        TBStatusLabel->setText(QApplication::translate("TicTacToeWindow", "Text Based Tic-Tac-Toe", nullptr));
        resetButton->setText(QApplication::translate("TicTacToeWindow", "Reset", nullptr));
        aiHardButton->setText(QApplication::translate("TicTacToeWindow", "Play against AI: Hard", nullptr));
        aiEasyButton->setText(QApplication::translate("TicTacToeWindow", "Play against AI: Easy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToeWindow: public Ui_TicTacToeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOEWINDOW_H
