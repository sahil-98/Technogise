#include "Pawn.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Pawn::Pawn()
{

}

string Pawn::possibleMoves(Cell cell , int maxSteps , int dim){

    return Piece::movement.moveUp(cell,maxSteps,dim);
}
