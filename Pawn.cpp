#include "Pawn.h"
#include "Piece.h"
Pawn::Pawn()
{
    //ctor
}

void Pawn::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
