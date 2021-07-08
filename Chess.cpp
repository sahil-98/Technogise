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
		if(x<0 || x>=8) return false;
		if(y<0 || y>=8) return false;
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
			int verticalPos = cell[0]-'A';
			int HorizontalPos = cell[1]-'0';
			// cout<<i<<" "<<j<<endl;
			if(!util.checkBounds(verticalPos,HorizontalPos)){
				cout<<"invalid query";
				return;
			}
		}	
};
int main(){
	Chess chessobject;

	chessobject.query("King", "Z5");
	King k;
	k.possibleMoves();

}