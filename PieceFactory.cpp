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
    //Map to Insert with Key as string and value as address to object
    PieceFactory::pieces["King"] = new King();
    PieceFactory::pieces["Queen"] = new Queen();
    PieceFactory::pieces["Bishop"] = new Bishop();
    PieceFactory::pieces["Knight"] = new Knight();
    PieceFactory::pieces["Rook"] = new Rook();
    PieceFactory::pieces["Pawn"] = new Pawn();
}

Piece* PieceFactory::getModel(string piece){
    if(PieceFactory::pieces.find(piece)==PieceFactory::pieces.end()) return nullptr;
    return PieceFactory::pieces[piece]; //returning address of object using string piece as key
}

int PieceFactory::getSteps(string piece){
    return (piece == "King" || piece == "Pawn" || piece == "Knight")? 1 : INT_MAX; //returning steps w.r.t string piece
}
