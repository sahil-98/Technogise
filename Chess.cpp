#include<bits/stdc++.h>
using namespace std;

class Movements
{
public:
	void move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim){
		char  alphabets[8] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H'};
		maxSteps = min(maxSteps,dim-1);
		// todo and use checkBounds
		for(int i=0;i<maxSteps;i++){
			currentVerticalPos+= VerticalStep;
			currentHorizontalPos+= HorizontalStep;
			if(currentVerticalPos<0 || currentHorizontalPos<0 ||
			   currentVerticalPos>=dim || currentHorizontalPos>=dim) return;
			cout<<alphabets[currentVerticalPos]<<","<<currentHorizontalPos<<endl;
		}
	}
	void moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		move(currentVerticalPos,currentHorizontalPos,1,0,maxSteps,dim); //Up
	}
	void moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		move(currentVerticalPos,currentHorizontalPos,-1,0,maxSteps,dim); //Down
	}
	void moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		move(currentVerticalPos,currentHorizontalPos,0,-1,maxSteps,dim); //Left
	}
	void moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		move(currentVerticalPos,currentHorizontalPos,0,1,maxSteps,dim); //Right
	}
	void moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		move(currentVerticalPos,currentHorizontalPos,1,1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,1,-1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,-1,1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,-1,-1,maxSteps,dim);
	}
	void moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim){
		move(currentVerticalPos,currentHorizontalPos,2,1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,1,2,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,-2,1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,-1,2,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,2,-1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,1,-2,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,-2,-1,maxSteps,dim);
		move(currentVerticalPos,currentHorizontalPos,-1,-2,maxSteps,dim);
	}

};



class Piece
{
public:
	Movements movement;
	 virtual void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim){
	 };

};

class King : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);

	}
};

class Queen : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
};

class Bishop : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		movement.moveDiagonal(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
};

class Knight : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		movement.moveLdirection(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
};

class Rook : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveDown(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveLeft(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
		movement.moveRight(currentVerticalPos,currentHorizontalPos,maxSteps,dim);

	}
};


class Pawn : public Piece {

public:
	void possibleMoves(int currentVerticalPos, int currentHorizontalPos , int maxSteps , int dim){

		movement.moveUp(currentVerticalPos,currentHorizontalPos,maxSteps,dim);
	}
};

class PieceFactory {
	unordered_map<string , Piece*> pieces;
    public:
	PieceFactory(){

		cout<<"hello\n";
		pieces["King"] = new King();
		pieces["Queen"] = new Queen();
		pieces["Bishop"] = new Bishop();
		pieces["Knight"] = new Knight();
		pieces["Rook"] = new Rook();
		pieces["Pawn"] = new Pawn();
	}

    Piece* getModel(string piece){
        return pieces[piece];
    }

    int getSteps(string piece){
		return (piece == "King" || piece == "Pawn" || piece == "Knight")? 1 : INT_MAX;	
	}

};

class Chess{
    unordered_map<string , Piece*> pieces;
    int dim ; //Board Dimension
	public:
		PieceFactory pieceFactory;
		Piece* pieceObj;

		Chess(int boardDimension){
			cout<<"hello\n";
			dim = boardDimension;
		}

		void query(string piece , string cell){
			
			int currentVerticalPos 	 = cell[0]-'A';
			int currentHorizontalPos = cell[1]-'0';
	
			if(currentVerticalPos<0 || currentHorizontalPos<0 ||
				currentVerticalPos>=dim || currentHorizontalPos>=dim){
				cout<<"invalid query\n";
				return;
			}

			int MaxSteps = pieceFactory.getSteps(piece);
			pieceObj = pieceFactory.getModel(piece);
			pieceObj->possibleMoves(currentVerticalPos,currentHorizontalPos,MaxSteps,dim);
		}
};
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
