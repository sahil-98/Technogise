#include "Knight.h"
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

Knight::Knight()
{
    //ctor

}

string Knight::possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

    return Piece::movement.moveLdirection(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
}

