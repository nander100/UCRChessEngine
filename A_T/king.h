#pragma once
#include "pieces.h"

class king : public pieces {
    public:
        king(const string &);
};

king::king(const string & color) : pieces(color) {
    name = color + "k";
}