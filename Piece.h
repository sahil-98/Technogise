#ifndef PIECE_H
#define PIECE_H
#include "Movements.h"
#include "Cell.h"
#include<iostream>
#include<assert.h>
using namespace std;

class Piece
{
    public:
        Piece();
        Movements movement;
        virtual string possibleMoves(Cell cell,int maxSteps , int dim);
};

#endif // PIECE_H
