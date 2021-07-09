#ifndef PIECEFACTORY_H
#define PIECEFACTORY_H
#include "Piece.h"
#include<iostream>
#include<assert.h>
#include<unordered_map>
using namespace std;

class PieceFactory
{
    private:
        Piece* getModel(string piece);
        unordered_map<string , Piece*> pieces;
        int getSteps(string piece);

    public:

        PieceFactory();

        friend class Chess;
        friend class TestPieceFactory;
};

#endif // PIECEFACTORY_H
