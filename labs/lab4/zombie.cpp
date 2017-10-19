//
//  zombie.cpp
//  
//
//  Created by Jared Gaskin on 10/17/17.
//
//

#include "zombie.hpp"
#include<iostream>
#include <cstdlib>

using std::endl;
using std::cout;


int Zombie::zombieCount = 0;

Zombie::Zombie()
{
    name = "Chad";
}

Zombie::Zombie(string n)
{
    name = n;
    zombieCount ++;
}

void Zombie::speak()
{
    cout << name << " says Braaaains!" << endl;
}


Zombie::~Zombie()
{
    zombieCount --;
}


