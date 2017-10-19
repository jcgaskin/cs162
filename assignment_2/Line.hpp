/*******************************************************
Line.hpp
 
 AUTHOR: Jared Gaskin
 
 DATE: 10/6/17
 
 DESCRIPTION: Header file for the Line class
 
 *********************************************************/

#ifndef LINE_HPP
#define LINE_HPP

#include <stdio.h>
#include "Point.hpp"

class Line
{

    private:
        Point point1;
        Point point2;
    public:
    class DegenerateLineException{};
    class UndefinedSlopeException{};
    class ParallelLinesException{};
        Line(Point,Point);
        Point getPoint1();
        Point getPoint2();
        double slope();
        Point intersectWith(Line);
    
};



#endif
