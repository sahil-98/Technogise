#include<bits/stdc++.h>
using namespace std;

#define N 8

class Movements
{
public:
	void move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps){
		char  alphabets[8] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H'};
		maxSteps = min(maxSteps,N-1);
		// todo and use checkBounds
		for(int i=0;i<maxSteps;i++){
			currentVerticalPos+= VerticalStep;
			currentHorizontalPos+= HorizontalStep;
			if(currentVerticalPos<0 || currentHorizontalPos<0 ||
			   currentVerticalPos>=N || currentHorizontalPos>=N) return;
			//if(!checkBounds(currentVerticalPos,currentHorizontalPos)) return;
			cout<<alphabets[currentVerticalPos]<<","<<currentHorizontalPos<<endl;
		}
	}
	void moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps){
		move(currentVerticalPos,currentHorizontalPos,1,0,maxSteps); //Up
	}
	void moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps){
		move(currentVerticalPos,currentHorizontalPos,-1,0,maxSteps); //Down
	}
	void moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps){
		move(currentVerticalPos,currentHorizontalPos,0,-1,maxSteps); //Left
	}
	void moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps){
		move(currentVerticalPos,currentHorizontalPos,0,1,maxSteps); //Right
	}
	void moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps){
		move(currentVerticalPos,currentHorizontalPos,1,1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,1,-1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,-1,1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,-1,-1,maxSteps);
	}
	void moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps){
		move(currentVerticalPos,currentHorizontalPos,2,1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,1,2,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,-2,1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,-1,2,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,2,-1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,1,-2,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,-2,-1,maxSteps);
		move(currentVerticalPos,currentHorizontalPos,-1,-2,maxSteps);
	}
	/*
	bool checkBounds(int x, int y){
		if(x<0 || x>=N) return false;
		if(y<0 || y>=N) return false;
		return true;
	}
	*/
};



class Piece
{
public:
	Movements movement;
	 virtual void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps){
	 };

};

class King : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps);

	}
};

class Queen : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps);
	}
};

class Bishop : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps){

		movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps);
	}
};

class Knight : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps){

		movement.moveLdirection(currentVerticalPos,currentHorizontalPos,maxSteps);
	}
};

class Rook : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps);
		movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps);

	}
};


class Pawn : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps);
	}
};

class Chess{
    unordered_map<string , Piece*> pieces;

	public:
		Movements movement;
		//unordered_map<string , Piece*> pieces;

		Chess(){
			cout<<"hello\n";
			pieces["King"] = new King();
			pieces["Queen"] = new Queen();
			pieces["Bishop"] = new Bishop();
			pieces["Knight"] = new Knight();
			pieces["Rook"] = new Rook();
			pieces["Pawn"] = new Pawn();
		}
		void query(string piece, string cell){
			//todo
			// parse the cell into integers
			int currentVerticalPos = cell[0]-'A';
			int currentHorizontalPos = cell[1]-'0';
			// cout<<i<<" "<<j<<endl;
			if(currentVerticalPos<0 || currentHorizontalPos<0 ||
			   currentVerticalPos>=N || currentHorizontalPos>=N){
				cout<<"invalid query\n";
				return;
			}
			int MaxSteps = (piece == "King" || piece == "Pawn" || piece == "Knight")? 1 : INT_MAX;
			pieces[piece]->possibleMoves(currentVerticalPos,currentHorizontalPos,MaxSteps);
		}
};
int main(){
	Chess chessobject;

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
	// King k;
	// k.possibleMoves();

}
