#include "TestKnight.h"
#include "Knight.h"
#include<iostream>
using namespace std;

TestKnight::TestKnight()
{

}
//Unit Testing using asserts
void TestKnight::possibleMovesTest(){
    Knight knight;
    assert(knight.possibleMoves(3,3,1,8)=="\nF5\nE6\nB5\nC6\nF3\nE2\nB3\nC2");//checking with expected outcome string
    assert(knight.possibleMoves(0,0,1,8)=="\nC2\nB3");
}
