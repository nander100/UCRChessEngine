#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class square {
    public:
        square() { } 
        string name = "  ";
        string color;
        pair<int,int> currPos;
        vector< pair<int,int> > possibleMoves;
        virtual void generatePossibleMoves() = 0;

};
