#include "TestQueen.h"
#include "Queen.h"
#include<iostream>
using namespace std;

TestQueen::TestQueen()
{

}
//Unit Testing using asserts
void TestQueen::possibleMovesTest(){
    Queen queen;
    assert(queen.possibleMoves(4,2,INT_MAX,8)=="\nF3\nG3\nH3\nD3\nC3\nB3\nA3\nE2\nE1\nE4\nE5\nE6\nE7\nE8\nF4\nG5\nH6\nF2\nG1\nD4\nC5\nB6\nA7\nD2\nC1");
    assert(queen.possibleMoves(0,0,INT_MAX,8)=="\nB1\nC1\nD1\nE1\nF1\nG1\nH1\nA2\nA3\nA4\nA5\nA6\nA7\nA8\nB2\nC3\nD4\nE5\nF6\nG7\nH8");
}
