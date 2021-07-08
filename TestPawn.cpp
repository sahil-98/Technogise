#include "TestPawn.h"
#include "Pawn.h"
#include<iostream>
using namespace std;

TestPawn::TestPawn()
{

}
//Unit Testing using asserts
void TestPawn::possibleMovesTest(){
    Pawn pawn;
    assert(pawn.possibleMoves(4,5,1,8)=="\nF6");//checking with expected outcome string
    assert(pawn.possibleMoves(0,0,1,8)=="\nB1");//checking with expected outcome string
}
