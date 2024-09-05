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
        int rank;
        int file;
        virtual void move() = 0;
        virtual vector< pair<int,int> >& generateLegalMoves() = 0;
};
