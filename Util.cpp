#include "Util.h"
#include "Movements.h"
#include<iostream>
using namespace std;

Util::Util()
{

}

bool Util::checkBounds(Cell cell,int dim)
{
    if(cell.vertical<0 || cell.horizontal<0 ||
        cell.vertical>=dim || cell.horizontal>=dim){
        return 0;
    }
    return 1;
}
