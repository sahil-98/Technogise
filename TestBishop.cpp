#include "TestBishop.h"
#include "Bishop.h"
#include "Cell.h"
#include<iostream>
using namespace std;

TestBishop::TestBishop()
{

}
//Unit Testing using asserts
void TestBishop::possibleMovesTest(){
    Bishop bishop;
    assert(bishop.possibleMoves(*(new Cell(3,1)),INT_MAX,8)=="\nE3\nF4\nG5\nH6\nE1\nC3\nB4\nA5\nC1");//checking with expected outcome string
    assert(bishop.possibleMoves(*(new Cell(0,0)),INT_MAX,8)=="\nB2\nC3\nD4\nE5\nF6\nG7\nH8");//checking with expected outcome string
}
