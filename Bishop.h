#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;


class Bishop: public Piece{
    private:
        string possibleMoves(Cell cell ,int maxSteps , int dim);
    public:
        Bishop();
        // string possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);
    friend class Chess;
    friend class PieceFactory;
    friend class TestBishop;

};

#endif // BISHOP_H
