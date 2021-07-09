#ifndef KING_H
#define KING_H
#include "Piece.h"
#include<iostream>
using namespace std;

class King: public Piece
{
    private:
        string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
    public:
        King();
        friend class Chess;
        friend class PieceFactory;
        friend class TestKing;
};

#endif // KING_H
