#ifndef KING_H
#define KING_H
#include "Piece.h"


class King: public Piece
{
    public:
        King();
        void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // KING_H
