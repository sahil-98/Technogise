#ifndef TESTMOVEMENTS_H
#define TESTMOVEMENTS_H
#include "Movements.h"


class TestMovements
{
    public:
        Movements movements;
        TestMovements();
        void moveTest();
        void moveUpTest();
        void moveDiagonalTest();
        void moveDownTest();
        void moveLdirectionTest();
        void moveLeftTest();
        void moveRightTest();

    protected:

    private:
};

#endif // TESTMOVEMENTS_H
