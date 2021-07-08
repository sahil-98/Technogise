#include "Movements.h"
#include<bits/stdc++.h>
using namespace std;


Movements::Movements()
{

}

string Movements::move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim){
    char  alphabets[8] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H'};
    string moveList="";
    maxSteps = min(maxSteps,dim-1);
    for(int i=0;i<maxSteps;i++){
        currentVerticalPos+= VerticalStep;
        currentHorizontalPos+= HorizontalStep;
        if(currentVerticalPos<0 || currentHorizontalPos<0 ||
           currentVerticalPos>=dim || currentHorizontalPos>=dim) return moveList;

       //Adding movements to moveList string
       moveList+="\n";
       moveList+=alphabets[currentVerticalPos];
       moveList+='0'+currentHorizontalPos+1;
    }
    return moveList;
}
//Function call for moving Upwards
string Movements::moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		return Movements::move(currentVerticalPos,currentHorizontalPos,1,0,maxSteps,dim); //Up
}
//Function call for moving Downwards
string Movements::moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    return Movements::move(currentVerticalPos,currentHorizontalPos,-1,0,maxSteps,dim); //Down
}
//Function call for moving Leftwards
string Movements::moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    return Movements::move(currentVerticalPos,currentHorizontalPos,0,-1,maxSteps,dim); //Left
}
//Function call for moving Rightwards
string Movements::moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    return Movements::move(currentVerticalPos,currentHorizontalPos,0,1,maxSteps,dim); //Right
}
//Function call for moving Diagonal
string Movements::moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,1,1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,1,-1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-1,1,maxSteps,dim);
    moveListExtend+= Movements::move(currentVerticalPos,currentHorizontalPos,-1,-1,maxSteps,dim);
    return moveListExtend;
}
//Function call for moving Ldirection
string Movements::moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
    //Adding movements to moveListExtend string
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
