#include "TestKing.h"
#include "King.h"
#include "Cell.h"
#include<iostream>
using namespace std;


TestKing::TestKing()
{

}
//Unit Testing using asserts
void TestKing::possibleMovesTest(){
    King king;
    assert(king.possibleMoves(*(new Cell(0,4)),1,8)=="\nB5\nA4\nA6\nB6\nB4");//checking with expected outcome string
    assert(king.possibleMoves(*(new Cell(0,0)),1,8)=="\nB1\nA2\nB2");
}
