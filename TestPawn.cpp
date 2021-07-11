#include "TestPawn.h"
#include "Pawn.h"
#include "Cell.h"
#include<iostream>
using namespace std;

TestPawn::TestPawn()
{

}
//Unit Testing using asserts
void TestPawn::possibleMovesTest(){
    Pawn pawn;
    assert(pawn.possibleMoves(*(new Cell(4,5)),1,8)=="\nF6");//checking with expected outcome string
    assert(pawn.possibleMoves(*(new Cell(0,0)),1,8)=="\nB1");//checking with expected outcome string
}
