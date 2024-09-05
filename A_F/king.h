#pragma once
#include "square.h"

class king : public square {
    public:
        king(const string &,int,int);
        void move() override {cout << "this is a" << name << endl;}
        vector< pair<int,int> >& generateLegalMoves() override;
};

vector< pair<int,int> >& king::generateLegalMoves() {
    
}

king::king(const string & color,int x, int y) : square() {
    name = color + "k";
}