#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include "Cell.h"
#include<iostream>
#include<assert.h>
using namespace std;

class Movements
{

    private:
        string move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim);
        string moveUp(Cell cell,int maxSteps , int dim);
        string moveDown(Cell cell ,int maxSteps , int dim);
        string moveLeft(Cell cell ,int maxSteps , int dim);
        string moveRight(Cell cell ,int maxSteps , int dim);
        string moveDiagonal(Cell cell,int maxSteps , int dim);
        string moveLdirection(Cell cell,int maxSteps , int dim);
    public:

        Movements();

        friend class King;
        friend class Queen;
        friend class Bishop;
        friend class Knight;
        friend class Rook;
        friend class Pawn;
        friend class TestMovements;

};

#endif // MOVEMENTS_H
