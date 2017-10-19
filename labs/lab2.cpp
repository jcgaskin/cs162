//
//  lab1.cpp
//
//  Created by Jared Gaskin on 9/21/17.
//
// Using recursion to add all the numbers in an array

#include <stdio.h>
#include <iostream>
using namespace std;



double summer(double inputArray[],int arrayLength)
{
    if(arrayLength == 0)
    {
        return 0;
    }
    return inputArray[arrayLength - 1] + summer(inputArray,arrayLength - 1);

}

int main()
{
    double testArray[] = {1.4,4.5,6.7,5.6};
    int testLength = 4;
    
    double testArray2[] = {1.0,47.6,6.3,5.9,4.5,6.7,5.6};
    int testLength2 = 7;
    
    double testOutput = summer(testArray,testLength);
    double testOutput2 = summer(testArray2,testLength2);
    
    cout << testOutput << "\n";
      cout << testOutput2 << "\n";
    return 0;
}