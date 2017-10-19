/*******************************************************
Line.cpp

AUTHOR: Jared Gaskin
 
DATE: 10/6/17
 
DESCRIPTION: Implementation file for the Line class
 
*********************************************************/

#include "Line.hpp"

const double TOLERANCE = 0.00001;


Point Line::getPoint1()
{
    return point1;
}

Point Line::getPoint2()
{
    return point2;
}


/************************
 
 Description: Constructor for a Line using two Point objects.
 Throws DegenerateLineException if two given points are the same
 
 ***********************/
Line::Line(Point p1,Point p2)
{
    //Testing to see if the two given points are the same (within a tolerance)
    if((((p2.getXCoord() - TOLERANCE) < p1.getXCoord()) && (p1.getXCoord() < (TOLERANCE + p2.getXCoord()))) && 
       (((p2.getYCoord() - TOLERANCE) < p1.getYCoord()) && (p1.getYCoord() < (TOLERANCE + p2.getYCoord()))))
        throw DegenerateLineException();
    
    point1 = p1;
    point2 = p2;
}



/************************
 
 Description: Returns the slope of a given line.
 Throws UndefinedSlopeException if the line is vertical
 
 ***********************/

double Line::slope()
{
    //Testing to see if the x-componenet of the slope = 0, within a tolerance (if so, line is vertical and thus has undefined slope)
    if(((point2.getXCoord() - point1.getXCoord()) < TOLERANCE) && 
       ( -1 * TOLERANCE < (point2.getXCoord() - point1.getXCoord())))
        throw UndefinedSlopeException();
    return (point2.getYCoord() - point1.getYCoord())/(point2.getXCoord() - point1.getXCoord());
}


/************************
 
 Description: Returns the point of intersection of two Line objects.
 Throws ParallelLinesException if the two lines do not have a point of intersection.
 
 ***********************/

Point Line::intersectWith(Line l)
{
    double x1 = point1.getXCoord();
    double x2 = point2.getXCoord();
    double x3 = l.getPoint1().getXCoord();
    double x4 = l.getPoint2().getXCoord();
    double y1 = point1.getYCoord();
    double y2 = point2.getYCoord();
    double y3 = l.getPoint1().getYCoord();
    double y4 = l.getPoint2().getYCoord();
    
    double denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    
    //Testing to see if the two lines are parallel (denominator of formula = 0, within a tolerance)
    if((denominator < TOLERANCE) && (-1 * TOLERANCE < denominator))
        throw ParallelLinesException();
    
    //Generating point of intersection using given formula
    Point intersectionPoint(((x1*y2 - y1*x2)*(x3 - x4) - (x1 - x2)*(x3*y4 - y3*x4))/denominator,
                            ((x1*y2 - y1*x2)*(y3 - y4) - (y1 - y2)*(x3*y4 - y3*x4))/denominator);
    
    return intersectionPoint;
    
    
}
