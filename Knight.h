#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include "TestKnight.h"
#include<iostream>
using namespace std;

class Knight : public Piece
{
    public:
        Knight();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
};

#endif // KNIGHT_H
