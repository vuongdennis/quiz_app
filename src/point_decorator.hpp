#ifndef __POINT_DECORATOR_HPP__
#define __POINT_DECORATOR_HPP__

class PointDecorator:public Point{
    private:
        int change;
    public:
        //Constructor:
        PointDecorator(){};
        int smallStreak(int);
        int bigStreak(int);
};

#endif //__POINT_DECORATOR_HPP__