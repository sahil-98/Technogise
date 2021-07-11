#include "King.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

King::King()
{

}

string King::possibleMoves(Cell cell ,int maxSteps , int dim){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Piece::movement.moveUp(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveDown(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveLeft(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveRight(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveDiagonal(cell,maxSteps,dim);
    return moveListExtend;
}

