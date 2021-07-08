#ifndef CHESS_H
#define CHESS_H
#include "PieceFactory.h"
#include "Piece.h"
#include<bits/stdc++.h>
using namespace std;

class Chess
{
    public:
        PieceFactory pieceFactory;
        Piece* pieceObj;
        Chess(int boardDimension);
        string query(string piece , string cell);

    private:
        int dim;
};

#endif // CHESS_H
