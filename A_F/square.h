#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <utility>
#include "board.h"
using namespace std;

class square {
    public:
        square() { } 
        string name = "  ";
        string color;
        pair<int,int> currPos;
        vector< pair<int,int> > possibleMoves;
        pair<int,int> addPair(const pair<int,int> & p1, const pair<int,int> & p2);
        pair<int,int> scalePair(int scalar, const pair<int,int> & p2);
        bool inBounds(const pair<int,int> &);
        virtual void generatePossibleMoves(const square * const board[8][8]) = 0;
};

pair<int,int> square::scalePair(int scalar, const pair<int,int> & p) {
return make_pair(p.first * scalar,p.second * scalar);
}
pair<int,int> square::addPair(const pair<int,int> & p1, const pair<int,int> & p2) {
    return make_pair(p1.first + p2.first, p1.second + p2.second);
}

bool square::inBounds(const pair<int,int> & p) {
 return !(p.first < 0 || p.first > 7 || p.second < 0 || p.second > 7);
}