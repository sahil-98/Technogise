#ifndef PIECE_H
#define PIECE_H
#include "Movements.h"

class Piece
{
    public:
        Piece();
        Movements movement;
        virtual void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // PIECE_H
