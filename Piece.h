#ifndef PIECE_H
#define PIECE_H
#include "Movements.h"
#include<bits/stdc++.h>
using namespace std;

class Piece
{
    public:
        Piece();
        Movements movement;
        virtual string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // PIECE_H
