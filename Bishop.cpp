#include "Bishop.h"
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

Bishop::Bishop()
{

}

string Bishop::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		return Piece::movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
