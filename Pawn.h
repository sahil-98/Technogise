#ifndef PAWN_H
#define PAWN_H
#include "Piece.h"


class Pawn: public Piece
{
    public:
        Pawn();
        void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // PAWN_H
