/*******************************************************
geomMain.cpp
 
 AUTHOR: Jared Gaskin
 
 DATE: 10/6/17
 
 DESCRIPTION: Main file for the assignment
 
 *********************************************************/

#include <stdio.h>
#include <iostream>
#include "Line.hpp"

using std::endl;
using std::cout;

int main()
{
        
        Point p1(1.0,1.0);
        Point p2(0.0,0.0);
        Point p3(-3.0,-10.0);
        Point p4(-2.0,-5.0);
        Point p5(0.0,0.0);
        Point p6(0.0,5.0);
        Point p7(1.0,6.0);
        Line line1(p1,p2);
        Line line2(p3,p4);
    
        double slope1 = line1.slope();
        double slope2 = line2.slope();
    
        Point intersection = line1.intersectWith(line2);
    
        double distance = p3.distanceTo(p2);
        cout << "Point 3 is "<< distance << " units away from the origin" << endl << endl;
        
    
        cout << "Slope of first line is: " << slope1 << endl;
        cout << "Slope of second line is: "<< slope2 << endl;
        cout << "These lines intersect at: (" << intersection.getXCoord()<< "," << intersection.getYCoord() << ")"<< endl << endl;
        
    
    
    try 
    {
        Line line3(p2,p5); //This generates a DegenerateLineException
    
    }
    catch (Line::DegenerateLineException) 
    {
        cout << "A line must have two distinct points and cannot be created with these points!" << endl << endl;
    }
    
    
    
    try 
    {
        Line line4(p5,p6);
        double testSlope = line4.slope(); //This generates an UndefinedSlope Exception
        
    }
    
    catch(Line::UndefinedSlopeException)
    {
        cout << "The line has an undefined slope!" << endl << endl;
    }
    
    
    
    try 
    {
        Line line5(p6,p7);
        Point testIntersection = line1.intersectWith(line5); //This generates a ParallelLinesException
        
    }
    catch(Line::ParallelLinesException)
    {
        cout << "The two lines do not intersect because they are parallel or coincident!" << endl << endl;
    }
   
    
    return 0;
}
