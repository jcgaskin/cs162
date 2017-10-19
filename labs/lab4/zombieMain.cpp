//
//  zombieMain.cpp
//  
//
//  Created by Jared Gaskin on 10/17/17.
//
//

#include <stdio.h>
#include "zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main()
{
    
    vector <Zombie*> zombieVec;
    
    bool running = true;
    
    while(running)
    {
        
        
        cout << "1) Create a Zombie" << endl;
         cout << "2) Destroy a Zombie" << endl;
         cout << "3) Print the current number of Zombies" << endl;
         cout << "4) Tell all Zombies to speak" << endl;
         cout << "5) Quit" << endl;
        
        int input;
        cin >> input;
        
        switch (input) {
            case 1:
            { 
                //create zombie
                string newZombName;
                cout << "Please enter a zombie name" << endl;
                cin >> newZombName;
                Zombie *newZomb;
                newZomb = new Zombie(newZombName);
                zombieVec.push_back(newZomb);
            }
                break;
            case 2:
            { 
                //destroy last zombie
                Zombie *zombPtr1;
                zombPtr1 = zombieVec.back();
                zombieVec.pop_back();
                delete zombPtr1;
            }
                break;
                
            case 3:
            { 
                //print number of existing zombies
                cout << "There are currently " << Zombie::zombieCount << " Zombies" << endl;
            }
                break;
            case 4:
            {  
                //tell all zombies to speak
                
                for(int i = 0; i< Zombie::zombieCount; i++)
                {
                    zombieVec.at(i)->speak();
                }
                
            } 
                break;
                
            case 5:
            {  
                for(int i = 0; i< Zombie::zombieCount; i++)
                {
                    delete zombieVec.at(i);
                }
                running = false;
            }
                
                break;
            default:
            { 
                cout << "That is invalid input" << endl;
            }
                
                break;
        }
        
    }
    
    
    return 0;
}

