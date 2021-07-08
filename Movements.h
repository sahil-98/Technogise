#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include<iostream>
#include<assert.h>
using namespace std;

class Movements
{
    public:
        string move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim);
        string moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        string moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        Movements();

};

#endif // MOVEMENTS_H
