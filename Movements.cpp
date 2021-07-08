#include "Movements.h"
#include<bits/stdc++.h>
using namespace std;


Movements::Movements()
{
    //ctor
}

string Movements::move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim){
    char  alphabets[8] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H'};
    string moveList="";
    maxSteps = min(maxSteps,dim-1);
    // todo and use checkBounds
    for(int i=0;i<maxSteps;i++){
        currentVerticalPos+= VerticalStep;
        currentHorizontalPos+= HorizontalStep;
        if(currentVerticalPos<0 || currentHorizontalPos<0 ||
           currentVerticalPos>=dim || currentHorizontalPos>=dim) return moveList;
        //cout<<alphabets[currentVerticalPos]<<","<<currentHorizontalPos<<endl;
       // moveList+="\n"+alphabets[currentVerticalPos]+","+currentHorizontalPos;
       moveList+="\n";
       moveList+=alphabets[currentVerticalPos];
       moveList+='0'+currentHorizontalPos+1;
        //moveList+="\banana";
    }
    return moveList;
}

string Movements::moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		return Movements::move(currentVerticalPos,currentHorizontalPos,1,0,maxSteps,dim); //Up
}
string Movements::moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    return Movements::move(currentVerticalPos,currentHorizontalPos,-1,0,maxSteps,dim); //Down
}
string Movements::moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    return Movements::move(currentVerticalPos,currentHorizontalPos,0,-1,maxSteps,dim); //Left
}
string Movements::moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    return Movements::move(currentVerticalPos,currentHorizontalPos,0,1,maxSteps,dim); //Right
}
string Movements::moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    string moveListExtend="";
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,1,1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,1,-1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-1,1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-1,-1,maxSteps,dim);
    return moveListExtend;
}
string Movements::moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    string moveListExtend="";
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,2,1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,1,2,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-2,1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-1,2,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,2,-1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,1,-2,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-2,-1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-1,-2,maxSteps,dim);
    return moveListExtend;
}
