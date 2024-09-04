#pragma once
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class pieces {

    public:
        pieces();
        pieces(const string &, int, int);
        string name;
        string color;
        int rank = 0;
        int file = 0;
        bool ispiece;
        virtual void move() {}
};

pieces::pieces() : name("  ") , rank(0), file(0), color(), ispiece(false) { }
pieces::pieces(const string & color, int x, int y) : name(), color(color), ispiece(true), rank(x), file(y) {

}