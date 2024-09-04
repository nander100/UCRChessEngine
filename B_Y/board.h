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
    board[0][0] = rook("b");
    board[0][1] = knight("b");
    board[0][2] = bishop("b");
    board[0][3] = queen("b");
    board[0][4] = king("b");
    board[0][5] = bishop("b");
    board[0][6] = knight("b");
    board[0][7] = rook("b");

    for(unsigned j = 0; j < 8; j++) {
        board[1][j] = pawn("b");
        board[6][j] = pawn("w");
    }

    board[7][0] = rook("w");
    board[7][1] = knight("w");
    board[7][2] = bishop("w");
    board[7][3] = queen("w");
    board[7][4] = king("w");
    board[7][5] = bishop("w");
    board[7][6] = knight("w");
    board[7][7] = rook("w");

}