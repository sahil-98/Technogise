#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"


class Knight : public Piece
{
    public:
        Knight();
        void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // KNIGHT_H
