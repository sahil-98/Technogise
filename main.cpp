#include "Chess.h"
#include<bits/stdc++.h>
using namespace std;


int main(){
    const int boardDimension = 8;

	Chess chessobject(boardDimension);

    cout<<"King"<<endl;
	cout<<chessobject.query("King", "A5");
	cout<<"King\n"<<endl;

	cout<<"Queen"<<endl;
	cout<<chessobject.query("Queen", "E3");
	cout<<"Queen\n"<<endl;

	cout<<"Bishop"<<endl;
	cout<<chessobject.query("Bishop", "D2");
	cout<<"Bishop\n"<<endl;

	cout<<"Knight"<<endl;
	cout<<chessobject.query("Knight", "D4");
	cout<<"Knight\n"<<endl;

	cout<<"Rook"<<endl;
	cout<<chessobject.query("Rook", "C1");
	cout<<"Rook\n"<<endl;

	cout<<"Pawn"<<endl;
	cout<<chessobject.query("Pawn", "E6");
	cout<<"Pawn\n"<<endl;

    cout<<"Pawn"<<endl;
	cout<<chessobject.query("Pawn", "G0");
	cout<<"Pawn\n"<<endl;

	cout<<"Invalid string"<<endl;
	cout<<chessobject.query("Pawn", "Z1");
	cout<<"Invalid string\n"<<endl;

	cout<<"Invalid string"<<endl;
	cout<<chessobject.query("Mango", "G0");
	cout<<"Invalid string\n"<<endl;
}
