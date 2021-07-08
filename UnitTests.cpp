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
#include<iostream>
using namespace std;

UnitTests::UnitTests()
{
    TestPieceFactory testPieceFactoryObject;
	TestChess testChessObject;
	TestKing testKingObject;
	TestQueen testQueenObject;
	TestBishop testBishopObject;
	TestKnight testKnightObject;
	TestRook testRookObject;
	TestPawn testPawnObject;
	TestMovements testMovementsObject;


	testPieceFactoryObject.getModelTest();
	testPieceFactoryObject.getStepsTest();


	testChessObject.queryTest();


	testKingObject.possibleMovesTest();


	testQueenObject.possibleMovesTest();


	testBishopObject.possibleMovesTest();


	testKnightObject.possibleMovesTest();


	testRookObject.possibleMovesTest();


	testPawnObject.possibleMovesTest();


	testMovementsObject.moveTest();
	testMovementsObject.moveUpTest();
	testMovementsObject.moveDownTest();
	testMovementsObject.moveLeftTest();
	testMovementsObject.moveRightTest();
	testMovementsObject.moveDiagonalTest();
	testMovementsObject.moveLdirectionTest();

	cout<<"\nAll Unit Tests Passed\n";
}
