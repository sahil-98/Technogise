#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"


class Bishop: public Piece
{
    public:
        Bishop();
        void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // BISHOP_H
