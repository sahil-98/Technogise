#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include "TestKnight.h"
#include<iostream>
using namespace std;

class Knight : public Piece
{
    private:
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
    public:
        Knight();
        friend class Chess;
        friend class PieceFactory;
        friend class TestKnight;
};

#endif // KNIGHT_H
