#include "TestRook.h"
#include "Rook.h"
#include "Cell.h"
#include<iostream>
using namespace std;

TestRook::TestRook()
{

}
//Unit Testing using asserts
void TestRook::possibleMovesTest(){
    Rook rook;
    assert(rook.possibleMoves(*(new Cell(2,0)),INT_MAX)=="\nD1\nE1\nF1\nG1\nH1\nB1\nA1\nC2\nC3\nC4\nC5\nC6\nC7\nC8");
    assert(rook.possibleMoves(*(new Cell(0,0)),INT_MAX)=="\nB1\nC1\nD1\nE1\nF1\nG1\nH1\nA2\nA3\nA4\nA5\nA6\nA7\nA8");
}
