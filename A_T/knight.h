#pragma once
#include "pieces.h"

class knight : public pieces {
    public:
        knight(const string &);
};

knight::knight(const string & color) : pieces(color) {
    name = color + "n";
}