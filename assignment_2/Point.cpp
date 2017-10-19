/*******************************************************
 Point.cpp
 
 AUTHOR: Jared Gaskin
 
 DATE: 10/4/17
 
 DESCRIPTION: Implementation file for the Point class
 
 *********************************************************/

#include "Point.hpp"
#include <cmath>

double Point::getXCoord()
{
    return x;
}

double Point::getYCoord()
{
    return y;
}


/************************
 
 Description: Default constructor for a Point at the origin.
 
 ***********************/

Point::Point()
{
    x = 0;
    y = 0;
}


/************************
 
 Description: Constructor for a point using two given values
 
 ***********************/

Point::Point(double i,double j)
{
    x = i;
    y = j;
}


/************************
 
 Description: Returns the distance from one Point to another 
 
 ***********************/

double Point::distanceTo(Point p)
{
    return sqrt(pow((x - p.getXCoord()),2) + pow((y - p.getYCoord()),2));
                                             
}
