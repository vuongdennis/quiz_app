#ifndef __POINT_GAIN_HPP__
#define __POINT_GAIN_HPP__

#include "point.hpp"

class PointGain:public Point{
    private:
        int change;
    public:
        //Constructor:
        PointGain():change(1){};
        //Pure Virtual Functions:
        virtual int PointChange(int curr){return curr+change;}
};

#endif //__POINT_GAIN_HPP__