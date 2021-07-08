#ifndef PIECE_H
#define PIECE_H
#include "Movements.h"
#include<iostream>
#include<assert.h>
using namespace std;

class Piece
{
    public:
        Piece();
        Movements movement;
        virtual string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
};

#endif // PIECE_H
