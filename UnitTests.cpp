#include "UnitTests.h"
#include "TestPieceFactory.h"
#include "TestChess.h"
#include "TestKing.h"
#include "TestQueen.h"
#include "TestBishop.h"
#include "TestKnight.h"
#include "TestRook.h"
#include "TestPawn.h"
#include "TestMovements.h"
#include<bits/stdc++.h>
using namespace std;

UnitTests::UnitTests()
{


    TestPieceFactory t1;
	TestChess t2;
	TestKing t3;
	TestQueen t4;
	TestBishop t5;
	TestKnight t6;
	TestRook t7;
	TestPawn t8;
	TestMovements t9;


	t1.getModelTest();
	t1.getStepsTest();


	t2.queryTest();


	t3.possibleMovesTest();


	t4.possibleMovesTest();


	t5.possibleMovesTest();


	t6.possibleMovesTest();


	t7.possibleMovesTest();


	t8.possibleMovesTest();


	t9.moveTest();
	t9.moveUpTest();
	t9.moveDownTest();
	t9.moveLeftTest();
	t9.moveRightTest();
	t9.moveDiagonalTest();
	t9.moveLdirectionTest();

	cout<<"\nAll Unit Tests Passed\n";
}
