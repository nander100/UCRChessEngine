#pragma once
#include "square.h"

class rook : public square {
    public:
        rook(const string &,int,int);
        void move() override {cout << "this is a" << name << endl;}
        vector< pair<int,int> >& generateLegalMoves() override;
};

vector< pair<int,int> >& rook::generateLegalMoves() {
    
}

rook::rook(const string & color,int x, int y) : square() {
    name = color + "r";
}