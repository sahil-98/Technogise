#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include "Cell.h"
#include "TestKnight.h"
#include<iostream>
using namespace std;

class Knight : public Piece
{
    private:
        string possibleMoves(Cell cell,int maxSteps);
    public:
        Knight();
        friend class Chess;
        friend class PieceFactory;
        friend class TestKnight;
};

#endif // KNIGHT_H
