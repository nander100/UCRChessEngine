#pragma once
#include "square.h"
#include "board.h"

class knight : public square {
    public:
        knight(const string &,int,int);
        void generatePossibleMoves() override;
};

void knight::generatePossibleMoves() {
    
    possibleMoves.clear();

    const vector<pair<int, int>> knightMoves = {
        {-2, -1}, {-2, 1}, {2, -1}, {2, 1},
        {-1, -2}, {-1, 2}, {1, -2}, {1, 2}
    };

    pair<int,int> temp;
    for(const auto & pair : knightMoves) {
        temp = addPair(pair,currPos);
        if(inBounds(temp)) {
            possibleMoves.push_back(temp);
        }
    }
    
}

knight::knight(const string & color,int x, int y) : square()  {
    name = color + "n";
    currPos.first = x;
    currPos.second = y;
    possibleMoves.reserve(8);
}
