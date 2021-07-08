#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;


class Pawn: public Piece
{
    public:
        Pawn();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // PAWN_H
