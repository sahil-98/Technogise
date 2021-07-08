#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;


class Knight : public Piece
{
    public:
        Knight();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // KNIGHT_H
