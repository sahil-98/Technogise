#include "TestKing.h"
#include "King.h"
#include<bits/stdc++.h>
using namespace std;


TestKing::TestKing()
{
}

void TestKing::possibleMovesTest(){
    King king;
    assert(king.possibleMoves(0,4,1,8)=="\nB5\nA4\nA6\nB6\nB4");
    assert(king.possibleMoves(0,0,1,8)=="\nB1\nA2\nB2");
}
