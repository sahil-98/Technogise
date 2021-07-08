#include "Chess.h"
#include "UnitTests.h"
#include<bits/stdc++.h>
using namespace std;


int main(){
    UnitTests ut;
    const int boardDimension = 8;

	Chess chessobject(boardDimension);

    cout<<"\n\nKing A5:"<<endl;
	cout<<chessobject.query("King", "A5");


	cout<<"\n\nKing A1:"<<endl;
	cout<<chessobject.query("King", "A1");


	cout<<"\n\nQueen E3:"<<endl;
	cout<<chessobject.query("Queen", "E3");


	cout<<"\n\nQueen A1:"<<endl;
	cout<<chessobject.query("Queen", "A1");


	cout<<"\n\nBishop D2:"<<endl;
	cout<<chessobject.query("Bishop", "D2");


	cout<<"\n\nBishop A1:"<<endl;
	cout<<chessobject.query("Bishop", "A1");


	cout<<"\n\nKnight D4:"<<endl;
	cout<<chessobject.query("Knight", "D4");


	cout<<"\n\nKnight A1:"<<endl;
	cout<<chessobject.query("Knight", "A1");


	cout<<"\n\nRook C1:"<<endl;
	cout<<chessobject.query("Rook", "C1");


	cout<<"\n\nRook A1:"<<endl;
	cout<<chessobject.query("Rook", "A1");


	cout<<"\n\nPawn E6:"<<endl;
	cout<<chessobject.query("Pawn", "E6");


	cout<<"\n\nPawn A1:"<<endl;
	cout<<chessobject.query("Pawn", "A1");


	cout<<"\n\nPawn Z1 :"<<endl;
	cout<<chessobject.query("Pawn", "Z1");


	cout<<"\n\nMango G3 :"<<endl;
	cout<<chessobject.query("Mango", "G3");




}
