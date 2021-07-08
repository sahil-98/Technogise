#include "Queen.h"
#include "Piece.h"
Queen::Queen()
{
    //ctor
}
void Queen::possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim){

    Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    Piece::movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    Piece::movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    Piece::movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
    Piece::movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
}
