#pragma once
#include <string>

// pieces
#define EMPTY 0
#define PAWN 1
#define KNIGHT 2
#define BISHOP 3
#define ROOK 4
#define QUEEN 5
#define KING 6

//color
#define WHITE 8
#define BLACK 16
using namespace std;

class Board {
    private:
        string fen; // stores the board position as stated by the FEN standard https://www.chess.com/terms/fen-chess
        string fullGame;
        bool wqCastle;
        bool wkCastle;
        bool bqCastle;
        bool bkCastle;
        void move(int, int, int, int); 
        void updateFEN(); // updates the fen string using the previous board position and the current board position 
        void buildBoard(string FEN);
        bool isValid(string move);
        int board[8][8]; // stores all the pieces
    public:
        void move(string);
        void printBoard(); // prints the board w/ fen
};