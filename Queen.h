#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
#include "Cell.h"
#include<iostream>
#include<assert.h>
using namespace std;

class Queen: public Piece
{
    private:
        string possibleMoves(Cell cell ,int maxSteps , int dim);
    public:
        Queen();
        friend class Chess;
        friend class PieceFactory;
        friend class TestQueen;
};

#endif // QUEEN_H
