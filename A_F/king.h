#pragma once
#include "square.h"

class king : public square {
    public:
        king(const string &,int,int);
        void generatePossibleMoves() override;
};

void king::generatePossibleMoves() {
    
}

king::king(const string & color,int x, int y) : square() {
    name = color + "k";
}