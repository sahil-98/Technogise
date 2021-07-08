#ifndef KING_H
#define KING_H
#include "Piece.h"
#include "TestKing.h"
#include<iostream>
using namespace std;

class King: public Piece
{
    public:
        King();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
};

#endif // KING_H
