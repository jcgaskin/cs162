//
//  Fraction.cpp
//  
//
//  Created by Jared Gaskin on 10/9/17.
//
//

#include "Fraction.hpp"


#include<string>

int Fraction::gcd(int x,int y)
{
    if(x % y == 0)
        return y;
    else
        return gcd(y,x % y);
}

Fraction::Fraction()
{
    numerator = 1;
    denominator = 1;
}

Fraction::Fraction(int n,int d)
{
    
    if(d == 0)
        throw zeroDenominator(n); //This throws the "zeroDenominator" exception class, and passes it the numerator value
    
    int divisor = gcd(n,d);    //This simplifies any fraction that is constructed
    numerator = n / divisor;
    denominator = d / divisor;
}

int Fraction::getNumerator()
{
    return numerator;
}

int Fraction::getDenominator()
{
    return denominator;
}

Fraction Fraction::multiply(Fraction f)
{
    int newNum = numerator * f.getNumerator();
    int newDen = denominator * f.getDenominator();
    Fraction result(newNum,newDen);
    return result;
}


