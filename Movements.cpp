#include "Movements.h"
#include "Cell.h"
#include<iostream>
using namespace std;


string Movements::move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps){
    char  alphabets[8] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H'};
    string moveList="";
    maxSteps = min(maxSteps,Movements::dim-1);
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
string Movements::moveUp( Cell cell  ,int maxSteps){
		return Movements::move(cell.vertical,cell.horizontal,1,0,maxSteps); //Up
}
//Function call for moving Downwards
string Movements::moveDown(Cell cell,int maxSteps){
    return Movements::move(cell.vertical,cell.horizontal,-1,0,maxSteps); //Down
}
//Function call for moving Leftwards
string Movements::moveLeft(Cell cell ,int maxSteps){
    return Movements::move(cell.vertical,cell.horizontal,0,-1,maxSteps); //Left
}
//Function call for moving Rightwards
string Movements::moveRight(Cell cell ,int maxSteps){
    return Movements::move(cell.vertical,cell.horizontal,0,1,maxSteps); //Right
}
//Function call for moving Diagonal
string Movements::moveDiagonal(Cell cell ,int maxSteps){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,1,1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,1,-1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,-1,1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,-1,-1,maxSteps);
    return moveListExtend;
}
//Function call for moving Ldirection
string Movements::moveLdirection(Cell cell,int maxSteps){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,2,1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,1,2,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,-2,1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,-1,2,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,2,-1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,1,-2,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,-2,-1,maxSteps);
    moveListExtend+= Movements::move(cell.vertical,cell.horizontal,-1,-2,maxSteps);
    return moveListExtend;
}
