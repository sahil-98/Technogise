#include "TestMovements.h"
#include "Movements.h"
#include<bits/stdc++.h>
using namespace std;


TestMovements::TestMovements()
{
}

void TestMovements::moveTest(){
    assert(TestMovements::movements.move(1,3,1,2,1,8) == "\nC6");
    assert(TestMovements::movements.move(1,3,1,1,INT_MAX,8) == "\nC5\nD6\nE7\nF8");
}

void TestMovements::moveUpTest(){
   assert(TestMovements::movements.moveUp(1,3,1,8) == "\nC4");
   assert(TestMovements::movements.moveUp(1,3,INT_MAX,8) == "\nC4\nD4\nE4\nF4\nG4\nH4");
}

void TestMovements::moveDownTest(){
   assert(TestMovements::movements.moveDown(3,3,1,8) == "\nC4");
   assert(TestMovements::movements.moveDown(4,3,INT_MAX,8) == "\nD4\nC4\nB4\nA4");
}

void TestMovements::moveLeftTest(){
    assert(TestMovements::movements.moveLeft(3,3,1,8) == "\nD3");
    assert(TestMovements::movements.moveLeft(4,3,INT_MAX,8) == "\nE3\nE2\nE1");
}

void TestMovements::moveRightTest(){
    assert(TestMovements::movements.moveRight(3,3,1,8) == "\nD5");
    assert(TestMovements::movements.moveRight(4,3,INT_MAX,8) == "\nE5\nE6\nE7\nE8");
}

void TestMovements::moveDiagonalTest(){
    assert(TestMovements::movements.moveDiagonal(3,3,1,8) == "\nE5\nE3\nC5\nC3");
    assert(TestMovements::movements.moveDiagonal(4,3,INT_MAX,8) == "\nF5\nG6\nH7\nF3\nG2\nH1\nD5\nC6\nB7\nA8\nD3\nC2\nB1");
}
void TestMovements::moveLdirectionTest(){
    assert(TestMovements::movements.moveLdirection(3,3,1,8) == "\nF5\nE6\nB5\nC6\nF3\nE2\nB3\nC2");
    assert(TestMovements::movements.moveLdirection(4,3,INT_MAX,8) == "\nG5\nF6\nG8\nC5\nA6\nD6\nC8\nG3\nF2\nC3\nA2\nD2");
}

