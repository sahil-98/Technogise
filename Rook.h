#ifndef ROOK_H
#define ROOK_H
#include "Piece.h"



class Rook : public Piece
{
    public:
        Rook();
        void possibleMoves(int currentVerticalPos, int currentHorizontalPos ,int maxSteps , int dim);

    protected:

    private:
};

#endif // ROOK_H
