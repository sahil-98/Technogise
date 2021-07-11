#include "Bishop.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Bishop::Bishop()
{

}

string Bishop::possibleMoves(Cell cell, int maxSteps , int dim){

		return Piece::movement.moveDiagonal(cell,maxSteps,dim);
	}
