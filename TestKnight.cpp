#include "TestKnight.h"
#include "Knight.h"
#include "Cell.h"
#include<iostream>
using namespace std;

TestKnight::TestKnight()
{

}
//Unit Testing using asserts
void TestKnight::possibleMovesTest(){
    Knight knight;
    assert(knight.possibleMoves(*(new Cell(3,3)),1)=="\nF5\nE6\nB5\nC6\nF3\nE2\nB3\nC2");//checking with expected outcome string
    assert(knight.possibleMoves(*(new Cell(0,0)),1)=="\nC2\nB3");
}
