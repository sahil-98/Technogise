#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

class Queen: public Piece
{
    public:
        Queen();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
};

#endif // QUEEN_H
