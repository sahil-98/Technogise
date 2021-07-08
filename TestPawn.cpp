#include "TestPawn.h"
#include "Pawn.h"
#include<bits/stdc++.h>
using namespace std;

TestPawn::TestPawn()
{
    //ctor
}

void TestPawn::possibleMovesTest(){
    Pawn pawn;
    assert(pawn.possibleMoves(4,5,1,8)=="\nF6");
    assert(pawn.possibleMoves(0,0,1,8)=="\nB1");
}
