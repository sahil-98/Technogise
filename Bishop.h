#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;


class Bishop: public Piece
{
    public:
        Bishop();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

};

#endif // BISHOP_H
