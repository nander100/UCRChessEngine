#pragma once
#include "square.h"

class queen : public square {
    public:
        queen(const string &,int,int);
        void move() override {cout << "this is a" << name << endl;}
        vector< pair<int,int> >& generateLegalMoves() override;
};

vector< pair<int,int> >& queen::generateLegalMoves() {
    
}

queen::queen(const string & color,int x, int y) : square() {
    name = color + "q";
}