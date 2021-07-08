#include<bits/stdc++.h>
using namespace std;

#define N 8

class Util
{
public:
	void move(int xStep, int yStep, int totalSteps){
		// todo and use checkBounds
	}

	bool checkBounds(int x, int y){
		
	}
};



class Piece
{
public:
	Util util;
	 virtual void possibleMoves();
	
};

class King : public Piece {

public:
	void possibleMoves(){
		cout<<"Possible moves works\n";
	}
};

class Queen : public Piece {

public:
	void possibleMoves(){
		
	}
};

class Bishop : public Piece {

public:
	void possibleMoves(){
		
	}
};

class Knight : public Piece {

public:
	void possibleMoves(){
		
	}
};

class Rook : public Piece {

public:
	void possibleMoves(){
		
	}
};

class Chess{

	public:
		Util util;

		Chess(){
			cout<<"hello\n";
		}
		void query(string piece, string cell){
			//todo
			// parse the cell into integers
};
int main(){
	Chess chessobject;

	chessobject.query("King", "Z5");
	King k;
	k.possibleMoves();

}