#include "Knight.h"
#include "Piece.h"

Knight::Knight()
{
    //ctor

}

void Knight::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

    Piece::movement.moveLdirection(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
}

