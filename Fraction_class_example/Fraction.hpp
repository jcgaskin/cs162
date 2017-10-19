//
//  Fraction.h
//  
//
//  Created by Jared Gaskin on 10/9/17.
//
//

#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <stdio.h>

class Fraction
{
    
private:
    int numerator;
    int denominator;
    int gcd(int,int);
    
    
public:
    
    class zeroDenominator
    {
    public:
        int numeratorValue;
        zeroDenominator(int nv) 
        {
            numeratorValue = nv;
        };
    };
    
    Fraction();
    Fraction(int,int);
    int getNumerator();
    int getDenominator();
    
    Fraction multiply(Fraction);
    Fraction divide(Fraction);
    Fraction add(Fraction);
    Fraction subtract(Fraction);
    
    void print();
    
};


#endif /* defined(____Fraction__) */
