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
        Movements movement;
        virtual string possibleMoves(Cell cell,int maxSteps)=0;
};

#endif // PIECE_H
