#pragma once
#include "pieces.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "queen.h"
#include "king.h"
#include <iostream>
using namespace std;


class board {

    private:
        string fen;

    public:
        pieces board[8][8];
        void initboard();
        void print();
};
void board::print() {
    cout << "-----------------------------------------" << endl;
    for(const auto & row : board) {
        for(const auto & piece : row) {
            cout << "| " << piece.name << " ";
        }
        cout << "|";
        cout << endl;
        cout << "-----------------------------------------" << endl;
    }

}

void board::initboard() {
    board[0][0] = rook("b",0,0);
    board[0][1] = knight("b",0,1);
    board[0][2] = bishop("b",0,2);
    board[0][3] = queen("b",0,3);
    board[0][4] = king("b",0,4);
    board[0][5] = bishop("b",0,5);
    board[0][6] = knight("b",0,6);
    board[0][7] = rook("b",0,7);

    for(unsigned j = 0; j < 8; j++) {
        board[1][j] = pawn("b",1,j);
        board[6][j] = pawn("w",6,j);
    }

    board[7][0] = rook("w",7,0);
    board[7][1] = knight("w",7,1);
    board[7][2] = bishop("w",7,2);
    board[7][3] = queen("w",7,3);
    board[7][4] = king("w",7,4);
    board[7][5] = bishop("w",7,5);
    board[7][6] = knight("w",7,6);
    board[7][7] = rook("w",7,7);

}