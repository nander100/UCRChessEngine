#pragma once
#include <iostream>
#include "board.h"
using namespace std;


class chess {
    public:
        chess();
        void movepiece();
    private:
        board myboard;


};


void chess::movepiece() {   
    int row;
    int column;
    cout << "input row and then column of piece to move" << endl;
    cin >> column >> row;
    
    square * currPiece = dynamic_cast<square*>(myboard.board[row][column]); 


    currPiece->move();


    // cout << "input place to move" << endl;
    // cin >> row >> column;

    // square* location = &myboard.board[row][column];

    // *location = *currPiece;
    // *currPiece = square();
}

chess::chess() {
    myboard.initboard();
    char c;
    do {
        myboard.print();
        movepiece();
        cin >> c;

    }while(c != 'q');
}