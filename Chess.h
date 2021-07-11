#ifndef CHESS_H
#define CHESS_H
#include "PieceFactory.h"
#include "Piece.h"
#include "Cell.h"
#include "Util.h"
#include<iostream>
using namespace std;

class Chess
{
    public:
        Util utilObject;
        PieceFactory pieceFactory;
        Piece* pieceObj;
        Chess(int boardDimension);
        //Chess();
        string query(string piece , string cell);

    private:
        int dim;
};

#endif // CHESS_H
