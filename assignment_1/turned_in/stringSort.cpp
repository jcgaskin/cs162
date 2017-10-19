//
//  assignment1.b.cpp
// Selection sort for an array of strings
//
//  Created by Jared Gaskin on 9/22/17.
//

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using std::toupper;

//function prototypes
void stringSort(string array[], int size);
void toUpperCase(string &given);
bool stringComparison(string one, string two);



//Selection sort function modified to sort an array of strings in alphabetical order
void stringSort(string array[], int size)
{
    
    int startScan, minIndex;
    string minValue;
    
    for(startScan = 0; startScan < (size - 1);startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        
        for(int index = startScan + 1; index < size; index++)
        {
            
            if(stringComparison(array[index],minValue))
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
    
}

//Converts a string to all upppercase characters
void toUpperCase(string &givenString)
{
    for(int i = 0; i<givenString.length();i++)
    {
        char tempChar = toupper(givenString.at(i));
        string tempString (1,tempChar);
        givenString.replace(i,1,tempString);
    }
}


//Returns true if first string comes alphabetically before the second string given
bool stringComparison(string firstString, string secondString)
{
    
    toUpperCase(firstString);
    toUpperCase(secondString);
    
    if(firstString < secondString)
    {
        return true;
    }
    return false;
}




int main()
{
    string arrayOfStrings[] = { "Zebra", "alligator", "test", "baboon", "monkey", "Hippo", "Apple","Cat","calzone","Penguin"};
    
    
    stringSort(arrayOfStrings, 10);
    
    for(int i = 0; i<10;i++)
    {
        cout << arrayOfStrings[i] << endl;
    }
    
    
    return 0;
    
    
}



