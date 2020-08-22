#ifndef __POINT_HPP__
#define __POINT_HPP__

class Point{
    private:
        int change;
    public:
        //Constructor:
        Point(){};
        //Point(int p){};
        //Pure Virtual Functions:
        virtual int PointChange(int)=0;
};

#endif //__POINT_HPP__