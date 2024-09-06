#pragma once
#include <iostream>
#include "board.h"
using namespace std;


class chess {
    public:
        chess();
        void movepiece();
    public:
        board myboard;

};


void chess::movepiece() {   
    int row;
    int column;
    cout << "input row and then column of piece to move" << endl;
    cin >> row >> column;

    pair<int,int> currPos(row,column);

    cout << "input row and then column of location to move" << endl;
    cin >> row >> column;

    pair<int,int> posToMove(row,column);

    myboard.movePiece(currPos,posToMove);
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