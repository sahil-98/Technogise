#include "PieceFactory.h"
#include "Piece.h"
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Queen.h"
#include "Rook.h"

PieceFactory::PieceFactory()
{
    //ctor
    cout<<"hello\n";
    PieceFactory::pieces["King"] = new King();
    PieceFactory::pieces["Queen"] = new Queen();
    PieceFactory::pieces["Bishop"] = new Bishop();
    PieceFactory::pieces["Knight"] = new Knight();
    PieceFactory::pieces["Rook"] = new Rook();
    PieceFactory::pieces["Pawn"] = new Pawn();
}

Piece* PieceFactory::getModel(string piece){
    if(PieceFactory::pieces.find(piece)==PieceFactory::pieces.end()) return nullptr;
    return PieceFactory::pieces[piece];
}

int PieceFactory::getSteps(string piece){
    return (piece == "King" || piece == "Pawn" || piece == "Knight")? 1 : INT_MAX;
}
