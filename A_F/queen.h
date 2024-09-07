#pragma once
#include "square.h"

class queen : public square {
    public:
        queen(const string &,int,int);
        void generatePossibleMoves() override;
};

void queen::generatePossibleMoves() {
    possibleMoves.clear();
    const vector< pair<int,int> > queenMoves = {
        {-1, -1}, {-1, 0}, {-1, 1}, {0, -1},
        {0, 1}, {1, -1}, {1, 0}, {1, 1}
    };

    pair<int,int> temp;
    for(int i = 1; i < 8; i++) {
        for(const auto & pair : queenMoves) {
            temp = addPair(currPos, scalePair(i,pair));
            if(inBounds(temp)) {
                possibleMoves.push_back(temp);
            }
        }
    }
}

queen::queen(const string & color,int x, int y) : square() {
    name = color + "q";
    currPos.first = x;
    currPos.second = y;
    possibleMoves.reserve(27); // most moves a queen can possibly have
}