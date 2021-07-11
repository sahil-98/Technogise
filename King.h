#ifndef KING_H
#define KING_H
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

class King: public Piece
{
    private:
        string possibleMoves(Cell cell ,int maxSteps);
    public:
        King();
        friend class Chess;
        friend class PieceFactory;
        friend class TestKing;
};

#endif // KING_H
