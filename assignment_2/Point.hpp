/*******************************************************
Point.hpp
 
 AUTHOR: Jared Gaskin
 
 DATE: 10/6/17
 
 DESCRIPTION: Header file for the Point class
 
 *********************************************************/

#ifndef POINT_HPP
#define POINT_HPP

#include <stdio.h>

class Point
{

    private:
        double x;
        double y;
    public:
        Point();
        Point(double,double);
        double getXCoord();
        double getYCoord();
        double distanceTo(Point);

};


#endif 
