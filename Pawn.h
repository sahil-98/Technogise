#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"
#include "Cell.h"
#include<iostream>
#include<assert.h>
using namespace std;

class Pawn: public Piece
{
    private:
        string possibleMoves(Cell cell ,int maxSteps , int dim);

    public:
        Pawn();
        friend class Chess;
        friend class PieceFactory;
        friend class TestPawn;

};

#endif // PAWN_H
