#ifndef KING_H
#define KING_H
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;


class King: public Piece
{
    public:
        King();
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // KING_H
