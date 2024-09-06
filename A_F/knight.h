#pragma once
#include "square.h"
#include "board.h"
//test
class knight : public square {
    public:
        knight(const string &,int,int);
        void generatePossibleMoves() override;
        void mirror(const pair<int,int> &);
        pair<int,int> addPair(const pair<int,int> &, const pair<int,int> &);
};


pair<int,int> knight::addPair(const pair<int,int> & p1, const pair<int,int> & p2) {
    return make_pair(p1.first + p2.first, p1.second + p2.second);
}

void knight::mirror(const pair<int,int> & move) {
    pair<int,int> temp;
    temp = move;
    
    temp.first *= -1;
    possibleMoves.push_back(temp);
    temp = move;

    temp.second *= -1;
    possibleMoves.push_back(temp);
    temp = move;

    temp.first *= -1;
    temp.second *= -1;
    possibleMoves.push_back(temp);

}

void knight::generatePossibleMoves() {
    
    pair<int /*row*/ ,int /*column*/ > basic1;
    pair<int /*row*/ ,int /*column*/ > basic2;

    possibleMoves.clear();
    possibleMoves.reserve(8);

    pair<int,int> origin(0,0);

    basic1 = origin;
    basic2 = origin;

    basic1.first += -2;
    basic1.second += -1;

    possibleMoves.push_back(basic1);

    basic2.first += -1;
    basic2.second += -2;

    possibleMoves.push_back(basic2);

    mirror(basic1);
    mirror(basic2);

    for(auto & pair : possibleMoves) {
        pair = addPair(pair,currPos);
    }
    vector< pair<int,int> >::iterator it;
    for(it = possibleMoves.begin(); it != possibleMoves.end();) {
        if(it->first < 0 || it->first > 7 || it->second < 0 || it->second > 7 ) {
            it = possibleMoves.erase(it);
        }
        else {
            it++;
        }
    }
    
}

knight::knight(const string & color,int x, int y) : square() {
    name = color + "n";
    currPos.first = x;
    currPos.second = y;

}
