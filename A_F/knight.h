#pragma once
#include "square.h"

class knight : public square {
    public:
        knight(const string &,int,int);
        void move() override {cout << "this is a" << name << endl;}
        vector< pair<int,int> >& generateLegalMoves() override;
};


vector< pair<int,int> >& knight::generateLegalMoves() {
    
}
knight::knight(const string & color,int x, int y) : square() {
    name = color + "n";
}