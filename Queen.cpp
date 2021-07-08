#include "Queen.h"
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

Queen::Queen()
{

}

string Queen::possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim){
    //Adding movements to moveListExtend string
    string moveListExtend="";
    moveListExtend+= Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    moveListExtend+= Piece::movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    return moveListExtend;
}
