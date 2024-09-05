#pragma once
#include "square.h"

class pawn : public square {
    public:
        pawn(const string &,int,int);
        void move() override;
        vector< pair<int,int> >& generateLegalMoves() override;
};

vector< pair<int,int> >& pawn::generateLegalMoves() {
    
}

void pawn::move() { cout << "this is a" << name << endl;}

pawn::pawn(const string & color,int x, int y) : square() {
    name = color + "p";
}