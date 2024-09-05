#pragma once
#include "square.h"

class bishop : public square {
    public:
        bishop(const string &,int,int);
        void move() override {cout << "this is a" << name << endl;}
        vector< pair<int,int> >& generateLegalMoves() override;
};

vector< pair<int,int> >& bishop::generateLegalMoves() {
    
}

bishop::bishop(const string & color,int x, int y) : square() {
    name = color + "b";
}