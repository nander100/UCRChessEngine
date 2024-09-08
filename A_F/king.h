#pragma once
#include "square.h"

class king : public square {
    public:
        king(const string &,int,int);
        void generatePossibleMoves(const square * const board[8][8]) override;
};

void king::generatePossibleMoves(const square * const board[8][8]) {
    
}

king::king(const string & color,int x, int y) : square() {
    name = color + "k";
}