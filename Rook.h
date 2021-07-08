#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"
#include "TestRook.h"
#include<iostream>
#include<assert.h>
#include<typeinfo>
using namespace std;

class Rook : public Piece
{
    public:
        Rook();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
};

#endif // ROOK_H
