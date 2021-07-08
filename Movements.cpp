#include "Movements.h"
#include<bits/stdc++.h>
using namespace std;


Movements::Movements()
{
    //ctor
}

void Movements::move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim){
    char  alphabets[8] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H'};
    maxSteps = min(maxSteps,dim-1);
    // todo and use checkBounds
    for(int i=0;i<maxSteps;i++){
        currentVerticalPos+= VerticalStep;
        currentHorizontalPos+= HorizontalStep;
        if(currentVerticalPos<0 || currentHorizontalPos<0 ||
           currentVerticalPos>=dim || currentHorizontalPos>=dim) return;
        cout<<alphabets[currentVerticalPos]<<","<<currentHorizontalPos<<endl;
    }
}

void Movements::moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		Movements::move(currentVerticalPos,currentHorizontalPos,1,0,maxSteps,dim); //Up
}
void Movements::moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    Movements::move(currentVerticalPos,currentHorizontalPos,-1,0,maxSteps,dim); //Down
}
void Movements::moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    Movements::move(currentVerticalPos,currentHorizontalPos,0,-1,maxSteps,dim); //Left
}
void Movements::moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    Movements::move(currentVerticalPos,currentHorizontalPos,0,1,maxSteps,dim); //Right
}
void Movements::moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    Movements::move(currentVerticalPos,currentHorizontalPos,1,1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,1,-1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,-1,1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,-1,-1,maxSteps,dim);
}
void Movements::moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    Movements::move(currentVerticalPos,currentHorizontalPos,2,1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,1,2,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,-2,1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,-1,2,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,2,-1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,1,-2,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,-2,-1,maxSteps,dim);
    Movements::move(currentVerticalPos,currentHorizontalPos,-1,-2,maxSteps,dim);
}
