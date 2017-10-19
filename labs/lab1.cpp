//
//  lab1.cpp
//
//
//  Created by Jared Gaskin on 9/24/17.
//  Comparing the efficiency of sequential and binary search algorithms
//

#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iostream>

using std::sort;
using std::cout;
using std::endl;


//The following search functions print out how many comparisons they have made

int sequentialSearch(int list[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    int count = 0;

    while(index < size && !found)
    {
        if(list[index] == value)
        {
            found = true;
            position = index;
        }
        count ++;
        index ++;
    }
    cout << "Linear (array size " << size << "): "<< count << " comparisons." << endl;
    return position;
}



int binarySearch( int array[], int size, int value)
{
    int count  = 0;
    int first = 0,
    last = size - 1,
    middle,
    position = -1;

    bool found = false;

    while(!found && first <= last)
    {
        middle = (first + last)/2;
        count ++;
        if(array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
        {
          count ++;
          last = middle - 1;
        }
        else
        {
          count ++;
          first = middle + 1;
        }
    }
    cout << "Binary (array size " << size << "): " << count << " comparisons." << endl;
    return position;
}




//Populates arrays with random numbers between 1 and 1000000

void populateArray(int arrayToBePopulated[], int size)
{

  unsigned seed = time(0);
  srand(seed);

  for(int i = 0;i< size; i++)
  {
    arrayToBePopulated[i] = rand() % 1000000 + 1;
  }
}




int main()
{
    int array1[1000];
    int array2[10000];
    int array3[100000];
    int array4[1000000];

    populateArray(array1,1000);
    populateArray(array2,10000);
    populateArray(array3,100000);
    populateArray(array4,1000000);

    //using built in sort function so that binary search can operate on the arrays
    sort(array1,array1 + 1000);
    sort(array2,array2 + 10000);
    sort(array3,array3 + 100000);
    sort(array4,array4 + 1000000);

    unsigned seed = time(0);
    srand(seed);

    int randTarget = rand() % 1000000 + 1;


    binarySearch(array1,1000,randTarget);
    binarySearch(array2,10000,randTarget);
    binarySearch(array3,100000,randTarget);
    binarySearch(array4,1000000,randTarget);

    sequentialSearch(array1,1000,randTarget);
    sequentialSearch(array2,10000,randTarget);
    sequentialSearch(array3,100000,randTarget);
    sequentialSearch(array4,1000000,randTarget);


}
