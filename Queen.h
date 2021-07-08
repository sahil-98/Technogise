#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"

class Queen: public Piece
{
    public:
        Queen();
        void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // QUEEN_H
