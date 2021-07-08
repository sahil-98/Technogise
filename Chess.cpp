#include<bits/stdc++.h>
using namespace std;

#define N 8

class Util
{
public:
	void move(int currX, int currY, int xStep, int yStep, int totalSteps){
		totalSteps = min(totalSteps,7);
		// todo and use checkBounds
		for(int i=0;i<totalSteps;i++){
			currX+=xStep;
			currY+=yStep;
			if(!checkBounds(currX,currY)) return;
			cout<<currX<<","<<currY<<endl;
		}
	}

	bool checkBounds(int x, int y){
		if(x<0 || x>=8) return false;
		if(y<0 || y>=8) return false;
		return true;
	}
};



class Piece
{
public:
	Util util;
	 virtual void possibleMoves(){
	 };

};

class King : public Piece {

public:
	void possibleMoves(int i, int j){
		// cout<<"Possible moves works\n";
		util.move(i,j,1,1,1);
		util.move(i,j,1,-1,1);
		util.move(i,j,-1,1,1);
		util.move(i,j,-1,-1,1);

		util.move(i,j,1,0,1);
		util.move(i,j,0,1,1);
		util.move(i,j,-1,0,1);
		util.move(i,j,0,-1,1);
	}
};

class Queen : public Piece {

public:
	void possibleMoves(int i, int j){

	}
};

class Bishop : public Piece {

public:
	void possibleMoves(int i, int j){

	}
};

class Knight : public Piece {

public:
	void possibleMoves(int i, int j){

	}
};

class Rook : public Piece {

public:
	void possibleMoves(int i, int j){

	}
};


class Pawn : public Piece {

public:
	void possibleMoves(int i, int j){

	}
};

class Chess{

	public:
		Util util;
		King p;

		Chess(){
			cout<<"hello\n";
		}
		void query(string piece, string cell){
			//todo
			// parse the cell into integers
			int i = cell[0]-'A';
			int j = cell[1]-'0';
			// cout<<i<<" "<<j<<endl;
			if(!util.checkBounds(i,j)){
				cout<<"invalid query\n";
				return;
			}
			unordered_map<string , int> pieces;
			pieces["King"] = 1;
			pieces["Queen"] = 2;
			pieces["Rook"] = 3;
			pieces["Bishop"] = 4;
			pieces["Knight"] = 5;
			pieces["Pawn"] = 6;

			switch(pieces[piece]) {
				case 1 :
                {
                            King p;
							p.possibleMoves(i,j);
							break;
                }

				case 2 :
                {
                            Queen q;
							p.possibleMoves(i,j);
							break;
                }

				case 3 :
                {
                            Rook r;
							r.possibleMoves(i,j);
							break;
                }

				case 4 :
                {
                            Bishop b;
							p.possibleMoves(i,j);
							break;
                }

				case 5 :
                {
                            Knight k;
							k.possibleMoves(i,j);
							break;
                }

				case 6 :
                {
                            Pawn a;
							a.possibleMoves(i,j);
							break;
                }

				default : cout<<"Invalid Query\n";


			}
		}


};
//Main Function
int main(){
	Chess chessobject;

	chessobject.query("King", "A5");
	// King k;
	// k.possibleMoves();

}
