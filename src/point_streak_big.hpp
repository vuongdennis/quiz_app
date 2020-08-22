#ifndef __POINT_STREAK_BIG_HPP__
#define __POINT_STREAK_BIG_HPP__

#include "point_decorator.hpp"

class PointStreakBig:public PointDecorator{
    private:
        int change;
    public:
        //Constructor:
        PointStreakBig():change(3){};
        //functions:
        int PointChange(int diff){return diff+change;}
};

#endif //__POINT_STREAK_BIG_HPP__