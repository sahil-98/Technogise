#include "Chess.h"
#include "PieceFactory.h"
#include<bits/stdc++.h>
using namespace std;

Chess::Chess(int boardDimension)
{
    //ctor
    Chess::dim = boardDimension;
}

void Chess::query(string piece , string cell){

    int currentVerticalPos 	 = cell[0]-'A';
    int currentHorizontalPos = cell[1]-'0';

    if(currentVerticalPos<0 || currentHorizontalPos<0 ||
        currentVerticalPos>=dim || currentHorizontalPos>=dim){
        cout<<"invalid query\n";
        return;
    }

    int MaxSteps = Chess::pieceFactory.getSteps(piece);
    Chess::pieceObj = pieceFactory.getModel(piece);
    Chess::pieceObj->possibleMoves(currentVerticalPos,currentHorizontalPos,MaxSteps,dim);
}
