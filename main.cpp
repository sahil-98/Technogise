#include<bits/stdc++.h>
#include "Chess.h"
using namespace std;


int main(){
    const int boardDimension = 8;

	Chess chessobject(boardDimension);

    cout<<"King"<<endl;
	chessobject.query("King", "A5");
	cout<<"King\n"<<endl;

	cout<<"Queen"<<endl;
	chessobject.query("Queen", "E3");
	cout<<"Queen\n"<<endl;

	cout<<"Bishop"<<endl;
	chessobject.query("Bishop", "D2");
	cout<<"Bishop\n"<<endl;

	cout<<"Knight"<<endl;
	chessobject.query("Knight", "D4");
	cout<<"Knight\n"<<endl;

	cout<<"Rook"<<endl;
	chessobject.query("Rook", "C1");
	cout<<"Rook\n"<<endl;

	cout<<"Pawn"<<endl;
	chessobject.query("Pawn", "E6");
	cout<<"Pawn\n"<<endl;

    cout<<"Pawn"<<endl;
	chessobject.query("Pawn", "G0");
	cout<<"Pawn\n"<<endl;
}
