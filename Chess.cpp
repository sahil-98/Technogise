#include "Chess.h"
#include "PieceFactory.h"
#include<iostream>
using namespace std;

Chess::Chess(int boardDimension)
{
    Chess::dim = boardDimension;
}

string Chess::query(string piece , string cell){

    int currentVerticalPos 	 = cell[0]-'A';
    int currentHorizontalPos = cell[1]-'1';

    if(currentVerticalPos<0 || currentHorizontalPos<0 ||
        currentVerticalPos>=dim || currentHorizontalPos>=dim){
        return "invalid query\n";
    }

    Chess::pieceObj = pieceFactory.getModel(piece);
    if(!Chess::pieceObj){
        return "invalid query\n";
    }
    int MaxSteps = Chess::pieceFactory.getSteps(piece);
    return Chess::pieceObj->possibleMoves(currentVerticalPos,currentHorizontalPos,MaxSteps,dim);
}
