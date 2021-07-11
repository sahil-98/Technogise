#include "Chess.h"
#include "PieceFactory.h"
#include "Cell.h"
#include<iostream>
using namespace std;

Chess::Chess(int boardDimension)
{
    Chess::dim = boardDimension;
}

string Chess::query(string piece , string pos){

    int currentVerticalPos 	 = pos[0]-'A';
    int currentHorizontalPos = pos[1]-'1';

    Cell cell(currentVerticalPos,currentHorizontalPos);

    if(!utilObject.checkBounds(cell,dim)){
        return "invalid query\n";
    }
    Chess::pieceObj = pieceFactory.getModel(piece);

    if(!Chess::pieceObj){
        return "invalid query\n";
    }
    int MaxSteps = Chess::pieceFactory.getSteps(piece);

    return Chess::pieceObj->possibleMoves(cell,MaxSteps);
}
