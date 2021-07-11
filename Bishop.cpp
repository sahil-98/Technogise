#include "Bishop.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Bishop::Bishop()
{

}

string Bishop::possibleMoves(Cell cell, int maxSteps){

		return Piece::movement.moveDiagonal(cell,maxSteps);
	}
