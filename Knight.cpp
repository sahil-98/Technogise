#include "Knight.h"
#include "Piece.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Knight::Knight()
{

}

string Knight::possibleMoves(Cell cell , int maxSteps){

    return Piece::movement.moveLdirection(cell,maxSteps);
}

