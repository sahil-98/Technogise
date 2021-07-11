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
    //cout<<"1: "<<currentVerticalPos;
    //cout<<"2: "<<currentHorizontalPos;
    Cell cell(currentVerticalPos,currentHorizontalPos);
    //cout<<cell.horizontal<<endl;
    //cout<<cell.vertical<<endl;

    if(cell.vertical<0 || cell.horizontal<0 ||
        cell.vertical>=dim || cell.horizontal>=dim){
        return "invalid query\n";
    }

    Chess::pieceObj = pieceFactory.getModel(piece);
    if(!Chess::pieceObj){
        return "invalid query\n";
    }
    int MaxSteps = Chess::pieceFactory.getSteps(piece);
    //return Chess::pieceObj->possibleMoves(currentVerticalPos,currentHorizontalPos,MaxSteps,dim);
    return Chess::pieceObj->possibleMoves(cell,MaxSteps,dim);
}
