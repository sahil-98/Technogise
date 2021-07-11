#include "Rook.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Rook::Rook()
{

}

string Rook::possibleMoves(Cell cell , int maxSteps){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Piece::movement.moveUp(cell,maxSteps);
    moveListExtend+= Piece::movement.moveDown(cell,maxSteps);
    moveListExtend+= Piece::movement.moveLeft(cell,maxSteps);
    moveListExtend+= Piece::movement.moveRight(cell,maxSteps);
    return moveListExtend;

}


