#include "Pawn.h"
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

Pawn::Pawn()
{

}

string Pawn::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

    return Piece::movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
}
