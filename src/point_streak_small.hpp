#ifndef __POINT_STREAK_SMALL_HPP__
#define __POINT_STREAK_SMALL_HPP__

#include "point_decorator.hpp"

class PointStreakSmall:public PointDecorator{
    private:
        int change;
    public:
        //Constructor:
        PointStreakSmall():change(2){};
        //functions:
        int PointChange(int diff){return diff+change;}
};

#endif //__POINT_STREAK_SMALL_HPP__