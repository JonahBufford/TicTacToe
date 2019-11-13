#ifndef TTTMODEL_H
#define TTTMODEL_H

#include <QObject>

class TTTModel
{
public:
    TTTModel();

    void reset();
    void put(int row, int col);
    QString getCurrentBoard(); // "---XOXX--"
    QString getWhosTurn(); // "X" or "O" or if somebody already won, return anything
    int getTurnCounter();
    bool hasSomeoneWon(); // return if somebody has won
    void nextTurn();
    void checkAI();
    void easyAiTurn();
    void hardAiTurn();
    int aIchecksBoard(char xOrO);
    bool checkWinLoss();
    void firstEmpty();
    void setEasyAi();
    void setHardAi();
    void setTurn(char turn);
    bool isAiGame();
    bool isHardAiTurn();
    bool isEasyAiTurn();
    QString whosWinner(); // return "X" or "O" if there's any winner. return anything if there's no winner yet

private:
    // my own data structure and boolean variable and checking logics if the game has ended?
    // finish implementation of the functions above
    QString boardStatus;
    char whoseTurn;
    int turnCounter;
    bool easyAI;
    bool hardAI;
};

#endif // TTTMODEL_H
