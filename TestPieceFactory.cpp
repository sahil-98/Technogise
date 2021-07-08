#include "TestPieceFactory.h"
#include "PieceFactory.h"
#include "Piece.h"
#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Queen.h"
#include "Rook.h"
#include<bits/stdc++.h>
using namespace std;

TestPieceFactory::TestPieceFactory()
{
}

void TestPieceFactory::getModelTest(){
    PieceFactory pieceFactory;
    string t1="King", t2="Queen", t3="Bishop", t4="Knight", t5="Rook",t6="Pawn",t7="Jack";
    vector<string>failed;

    assert(typeid(pieceFactory.getModel("King")) == typeid(Piece*));
    assert(typeid(pieceFactory.getModel("Queen")) == typeid(Piece*));
    assert(typeid(pieceFactory.getModel("Bishop")) == typeid(Piece*));
    assert(typeid(pieceFactory.getModel("Knight")) == typeid(Piece*));
    assert(typeid(pieceFactory.getModel("Rook")) == typeid(Piece*));
    assert(typeid(pieceFactory.getModel("Pawn")) == typeid(Piece*)) ;

    assert(pieceFactory.getModel("Jack") == nullptr);
}

void TestPieceFactory::getStepsTest(){
    PieceFactory pieceFactory;
    string t1="King", t2="Queen", t3="Bishop", t4="Knight", t5="Rook",t6="Pawn";
    assert(pieceFactory.getSteps("King")==1);
    assert(pieceFactory.getSteps("Knight")==1);
    assert(pieceFactory.getSteps("Pawn")==1);
    assert(pieceFactory.getSteps("Queen")==INT_MAX);
    assert(pieceFactory.getSteps("Bishop")==INT_MAX);
    assert(pieceFactory.getSteps("Rook")==INT_MAX);
}
