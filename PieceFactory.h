#ifndef PIECEFACTORY_H
#define PIECEFACTORY_H
#include "Piece.h"
#include "Rook.h"
#include<iostream>
#include<assert.h>
#include<unordered_map>
using namespace std;

class PieceFactory
{
    public:
        unordered_map<string , Piece*> pieces;
        PieceFactory();
        Piece* getModel(string piece);
        int getSteps(string piece);
};

#endif // PIECEFACTORY_H
