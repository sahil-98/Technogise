#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include<iostream>
#include<assert.h>
using namespace std;

class Movements
{

    private:
        string move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim);
        string moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
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
