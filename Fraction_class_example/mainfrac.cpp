//
//  mainfrac.cpp
//  
//
//  Created by Jared Gaskin on 10/9/17.
//
//

#include<iostream>
#include <stdio.h>
#include "Fraction.hpp"

using std::cout;
using std::endl;

int main()
{
    try
    {
        Fraction fract2(1,0);
    }
    catch(Fraction::zeroDenominator zd)
    {
        cout << "Cannot have a denominator of 0, the numerator was " << zd.numeratorValue << endl;
    }
    
    
    
    return 0;
    
}

