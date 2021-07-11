#include "Pawn.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Pawn::Pawn()
{

}

string Pawn::possibleMoves(Cell cell , int maxSteps){

    return Piece::movement.moveUp(cell,maxSteps);
}
