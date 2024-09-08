#pragma once
#include "pawn.h"
#include "bishop.h"
#include "knight.h"
#include "rook.h"
#include "queen.h"
#include "king.h"
#include "emptySquare.h"
using namespace std;


class board {

    private:
        string fen;
    public:
        square* board[8][8];
        void initboard();
        void print();
        void movePiece(const pair<int,int> &, const pair<int,int> &);
};


void board::movePiece(const pair<int,int> & currPos,const pair<int,int> & posToMove) {
    square * piece = dynamic_cast<square*>(board[currPos.first][currPos.second]); 
    piece->generatePossibleMoves(board);

    for(const auto & position : piece->possibleMoves) {
        if(position == posToMove) {
            delete board[posToMove.first][posToMove.second];
            board[posToMove.first][posToMove.second] = piece;
            piece->currPos = posToMove;
            board[currPos.first][currPos.second] = new emptySquare("  ",currPos.first,currPos.second);
        }
    }
}

void board::print() {
    cout << "-----------------------------------------" << endl;
    for(const auto & row : board) {
        for(const auto & piece : row) {
            cout << "| " << piece->name << " ";
        }
        cout << "|";
        cout << endl;
        cout << "-----------------------------------------" << endl;
    }

}

void board::initboard() {

    for(unsigned i =0; i < 8; i++) {
        for(unsigned j = 0; j < 8; j++ ) {
            board[i][j] = new emptySquare("  ", i,j);
        }

    }
    board[0][0] = new rook("b",0,0);
    board[0][1] = new knight("b",0,1);
    board[0][2] = new bishop("b",0,2);
    board[0][3] = new queen("b",0,3);
    board[0][4] = new king("b",0,4);
    board[0][5] = new bishop("b",0,5);
    board[0][6] = new knight("b",0,6);
    board[0][7] = new rook("b",0,7);

    for(unsigned j = 0; j < 8; j++) {
        board[1][j] = new pawn("b",1,j);
        board[6][j] = new pawn("w",6,j);
    }

    board[7][0] = new rook("w",7,0);
    board[7][1] = new knight("w",7,1);
    board[7][2] = new bishop("w",7,2);
    board[7][3] = new queen("w",7,3);
    board[7][4] = new king("w",7,4);
    board[7][5] = new bishop("w",7,5);
    board[7][6] = new knight("w",7,6);
    board[7][7] = new rook("w",7,7);
    
}