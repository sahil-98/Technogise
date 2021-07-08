#include "Bishop.h"
#include "Piece.h"

Bishop::Bishop()
{
    //ctor
}

void Bishop::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		Piece::movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
