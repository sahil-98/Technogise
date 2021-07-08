#include "TestChess.h"
#include "Chess.h"
#include<bits/stdc++.h>
using namespace std;


TestChess::TestChess()
{

}
//Unit Testing using asserts
void TestChess::queryTest(){
    Chess chess(8);

    assert(chess.query("King", "A5")=="\nB5\nA4\nA6\nB6\nB4"); //checking with expected outcome string
    assert(chess.query("Queen", "A1")=="\nB1\nC1\nD1\nE1\nF1\nG1\nH1\nA2\nA3\nA4\nA5\nA6\nA7\nA8\nB2\nC3\nD4\nE5\nF6\nG7\nH8");
    assert(chess.query("Pawn", "Z1")=="invalid query\n");
    assert(chess.query("Mango", "G3")=="invalid query\n");
}
