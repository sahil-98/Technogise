#include "TestKnight.h"
#include "Knight.h"
#include<bits/stdc++.h>
using namespace std;

TestKnight::TestKnight()
{
}

void TestKnight::possibleMovesTest(){
    Knight knight;
    assert(knight.possibleMoves(3,3,1,8)=="\nF5\nE6\nB5\nC6\nF3\nE2\nB3\nC2");
    assert(knight.possibleMoves(0,0,1,8)=="\nC2\nB3");
}
