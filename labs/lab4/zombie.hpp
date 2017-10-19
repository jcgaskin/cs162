//
//  zombie.hpp
//  
//
//  Created by Jared Gaskin on 10/17/17.
//
//

#ifndef ZOMBIE
#define ZOMBIE

#include <stdio.h>
#include <string>

using std::string;

class Zombie 
{
private:
    string name;
public:
    static int zombieCount;
    Zombie();
    Zombie(string);
    void speak();
     ~Zombie();
    
    
};

#endif
