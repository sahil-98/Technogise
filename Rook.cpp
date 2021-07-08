#include "Rook.h"
#include "Piece.h"

Rook::Rook()
{
    //ctor
}

void Rook::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		Piece::movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		Piece::movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		Piece::movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);

	}


