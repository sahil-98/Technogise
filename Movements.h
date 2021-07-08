#ifndef MOVEMENTS_H
#define MOVEMENTS_H


class Movements
{
    public:
        Movements();
        void move(int currentVerticalPos, int currentHorizontalPos, int VerticalStep, int HorizontalStep, int maxSteps, int dim);
        void moveUp(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        void moveDown(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        void moveLeft(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        void moveRight(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        void moveDiagonal(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
        void moveLdirection(int currentVerticalPos , int currentHorizontalPos ,int maxSteps , int dim);
    protected:

    private:
};

#endif // MOVEMENTS_H
