#include "Rook.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Rook::Rook()
{

}

string Rook::possibleMoves(Cell cell , int maxSteps , int dim){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Piece::movement.moveUp(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveDown(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveLeft(cell,maxSteps,dim);
    moveListExtend+= Piece::movement.moveRight(cell,maxSteps,dim);
    return moveListExtend;

}


