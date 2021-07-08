#include "King.h"
#include "Piece.h"


King::King()
{
    //ctor
}

void King::possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim){

			Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
			Piece::movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
			Piece::movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
			Piece::movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
			Piece::movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);

		}

