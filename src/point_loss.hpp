#ifndef __POINT_LOSS_HPP__
#define __POINT_LOSS_HPP__

#include "point.hpp"

class PointLoss:public Point{
    private:
        int change;
    public:
        //Constructor:
        PointLoss(int p):change(p){};
        //Pure Virtual Functions:
        virtual int PointChange(int curr){return curr-change;}
};

#endif //__POINT_LOSS_HPP__