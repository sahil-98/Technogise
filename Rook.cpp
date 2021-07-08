#include "Rook.h"
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

Rook::Rook()
{
    //ctor
}

string Rook::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){
    string moveListExtend="";
    moveListExtend+= Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    return moveListExtend;

}


