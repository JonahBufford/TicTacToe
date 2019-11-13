#include "tttmodel.h"
#include <iostream>

#include <QMessageBox>

TTTModel::TTTModel()
{
    boardStatus = "---------";
    whoseTurn = 'O';
    turnCounter = 0;
    easyAI = false;
    hardAI = false;
}

void TTTModel::reset()
{
    boardStatus = "---------";
    whoseTurn = 'O';
    turnCounter = 0;
    easyAI = false;
    hardAI = false;
}

void TTTModel::put(int row, int col)
{
    int index = 3 * row + col;
    if(boardStatus[index] == '-'){
        boardStatus[index] = whoseTurn;
        turnCounter++;
    }
    else{
        QMessageBox warning;
        warning.setText("This space has already been chosen");
        warning.exec();
        nextTurn();
    }
}

QString TTTModel::getCurrentBoard() // something like "---XOXX--"
{
    return boardStatus;
}

QString TTTModel::getWhosTurn() // "X" or "O" or if somebody already won, return anything
{
    QString convert = "";
    convert += whoseTurn;
    return convert;
}

int TTTModel::getTurnCounter(){
    return turnCounter;
}

bool TTTModel::hasSomeoneWon() // return if somebody has won
{
    bool win = false;
    for(int i = 0; i <= 2; i++){
        QString row = "---";
        QString col = "---";
        for(int j = 0; j <= 2; j++){
            row[j] = boardStatus[3 * i + j];
            col[j] = boardStatus[i + (3 * j)];
        }
        if(row == "XXX" || row == "OOO" || col == "XXX" || col == "OOO"){
            win = true;
        }
    }

    QChar middle = boardStatus[4];
    if(middle != '-'){
        if(middle == boardStatus[0] && middle == boardStatus[8]){
            win = true;
        }
        if(middle == boardStatus[2] && middle == boardStatus[6]){
            win = true;
        }
    }

    return win;
}

QString TTTModel::whosWinner() // return "X" or "O" if there's any winner. return anything if there's no winner yet
{
    QString convert = "";
    convert += whoseTurn;
    return convert;
}

void TTTModel::nextTurn()
{
    if(whoseTurn == 'X'){
        whoseTurn = 'O';
    }
    else{
        whoseTurn = 'X';
    }
}

void TTTModel::checkAI(){
    if(!hasSomeoneWon() && turnCounter < 9){
        if(hardAI && whoseTurn == 'X'){
            hardAiTurn();
        }
        else if (easyAI && whoseTurn == 'O') {
            easyAiTurn();
        }
    }
}

int TTTModel::aIchecksBoard(char xOrO)
{
    int diag1Success = 0;
    int diag2Success = 0;
    int diag1EmptySpace = -1;
    int diag2EmptySpace = -1;

    for(int i = 0; i <= 2; i++){
        int rowSuccess = 0;
        int colSuccess = 0;
        int rowEmptySpace = -1;
        int colEmptySpace = -1;
        for(int j = 0; j <= 2; j++){
            int rowIndex = 3 * i + j;
            int colIndex = i + 3 * j;
            if(boardStatus[rowIndex] == xOrO){
                rowSuccess++;
            }
            else if(boardStatus[rowIndex] == '-'){
                rowEmptySpace = rowIndex;
            }
            if(boardStatus[colIndex] == xOrO){
                colSuccess++;
            }
            else if (boardStatus[colIndex] == '-') {
                colEmptySpace = colIndex;
            }
        }
        if(rowSuccess == 2 && rowEmptySpace != -1){
            return rowEmptySpace;
        }
        else if (colSuccess == 2 && colEmptySpace != -1) {
            return colEmptySpace;
        }

        int diag1Index = i * 4;
        int diag2Index = 2 + i * 2;

        if(boardStatus[diag1Index] == xOrO){
            diag1Success++;
        }
        else if (boardStatus[diag1Index] == '-') {
            diag1EmptySpace = diag1Index;
        }
        if(boardStatus[diag2Index] == xOrO){
            diag2Success++;
        }
        else if (boardStatus[diag2Index] == '-') {
            diag2EmptySpace = diag2Index;
        }
    }

    if(diag1Success == 2 && diag1EmptySpace != -1){
        return diag1EmptySpace;
    }

    if(diag2Success == 2 && diag2EmptySpace != -1){
        return diag2EmptySpace;
    }

    return -1;
}

void TTTModel::hardAiTurn(){
    if(turnCounter == 0){
        put(1,1);
    }
    else if (turnCounter == 2) {
        if(boardStatus[0] == 'O' || boardStatus[2] == 'O' || boardStatus[3] == 'O'
                ||  boardStatus[5] == 'O'){
            put(2,1);
        }
        else {
            put(1,2);
        }
    }
    else if(turnCounter == 4) {
        if(!checkWinLoss()){
            if(boardStatus[8] == '-'){
                put(2,2);
            }
            else{
                firstEmpty();
            }
        }
    }
    else {
        if(!checkWinLoss()){
            firstEmpty();
        }
    }
}

void TTTModel::easyAiTurn(){
    if(turnCounter == 1){
        if(boardStatus[1] == '-'){
            put(0,1);
        }
        else{
            put(1,2);
        }
    }
    else{
        if(!checkWinLoss()){
            firstEmpty();
        }
    }
}

bool TTTModel::checkWinLoss(){
    int couldWin;
    int couldLose;
    if(easyAI){
        couldWin = aIchecksBoard('O');
        couldLose = aIchecksBoard('X');
    }
    else{
        couldWin = aIchecksBoard('X');
        couldLose = aIchecksBoard('O');
    }
    bool havePut = false;
    if(couldWin != -1){
        int row = couldWin % 3;
        int col = couldWin - row * 3;
        put(row, col);
        havePut = true;
    }
    else if(couldLose != -1){
        int row = couldLose % 3;
        int col = couldLose - row * 3;
        put(row,col);
        havePut = true;
    }
    return havePut;
}

void TTTModel::firstEmpty(){
    bool placed = false;
    int count = 0;
    while(!placed && count < 9){
        if(boardStatus[count] == '-'){
            int row = count % 3;
            int col = count - row * 3;
            put(row,col);
            placed = true;
        }
        count++;
    }
}

void TTTModel::setEasyAi(){
    easyAI = true;
}

void TTTModel::setHardAi(){
    hardAI = true;
}

void TTTModel::setTurn(char turn){
    whoseTurn = turn;
}

bool TTTModel::isAiGame(){
    if(easyAI || hardAI){
        return true;
    }
    return false;
}

bool TTTModel::isHardAiTurn(){
    if (hardAI && whoseTurn == 'X') {
        return true;
    }
    return false;
}

bool TTTModel::isEasyAiTurn(){
    if(easyAI && whoseTurn == 'O'){
        return true;
    }
    return false;
}






