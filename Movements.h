#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include "Cell.h"
#include<iostream>
#include<assert.h>
using namespace std;

class Movements
{

    private:
        string move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps);
        string moveUp(Cell cell,int maxSteps);
        string moveDown(Cell cell ,int maxSteps);
        string moveLeft(Cell cell ,int maxSteps);
        string moveRight(Cell cell ,int maxSteps);
        string moveDiagonal(Cell cell,int maxSteps);
        string moveLdirection(Cell cell,int maxSteps);
    public:
        static int dim;
        friend class King;
        friend class Queen;
        friend class Bishop;
        friend class Knight;
        friend class Rook;
        friend class Pawn;
        friend class TestMovements;

};

#endif // MOVEMENTS_H
