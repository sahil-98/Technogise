#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"
#include "TestRook.h"
#include<iostream>
#include<assert.h>
#include<typeinfo>
using namespace std;

class Rook : public Piece
{   private:
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
    public:
        Rook();
        friend class Chess;
        friend class PieceFactory;
        friend class TestRook;
};

#endif // ROOK_H
