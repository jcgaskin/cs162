//
//  assignment1.a.cpp

//  Hangman program
//
//  Created by Jared Gaskin on 9/22/17.
//


#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    //main loop allowing the user to play again
    bool gameloop = true;
    while(gameloop)
    {
    
        cout << "Welcome To Hangman!" << endl << endl;
    
        //list of possible strings for the game.
        string possibleWords[] = 
        {"computer","science","engineering","oregon","electrical","soccer","basketball","google","language","guitar"};
    
        //Selecting a random word for the game's solution
        unsigned seed = time(0);
        srand(seed);
    
        int randomNum = rand() % 10;
        string selectedWord = possibleWords[randomNum];

        //Creating a string of hyphens the same length as the solution word
        string puzzle = string(selectedWord.length(),'-');
        
        //Loop control variable
        bool won = false;
    
        //String for storing guessed letters and integer for number of attempts
        string guessedLetters = " ";
        int numberOfAttempts = 0;
    
        while(!won)
        {
        
            //Show the current state of the puzzle
            cout << puzzle << endl;
        
            //Get a letter guess from the user
            cout << "Guess a letter:";
            string guess;
            cin >> guess;
            cout << endl;
        
   
            int found = selectedWord.find(guess);
            int foundInGuessed = guessedLetters.find(guess);
            
            //if the guessed letter has not already been guessed
            if(foundInGuessed == -1)
            {
                //If the guessed letter exists in the solution word
                if(found != -1)
                {
                    //find the location of the guessed letter in the solution word
                    string foundLetter = selectedWord.substr(found,1);
                    //For each occurance of the letter in the solution word
                    for(int i = 0;i<selectedWord.length();i++)
                    {
                        if(selectedWord.substr(i,1) == foundLetter)
                        {
                            //replace the same location in the puzzle word with the guessed letter
                            puzzle.replace(i,1,foundLetter);
                        }
                    }
                }
                
                //Add the letter to the list of guessed letters and increment the number of guesses
                guessedLetters.append(guess + " ");
                numberOfAttempts++;
            }
            
            //If the letter has already been guessed, neither of the above conditional statements will be true
            //and the guess will not count as an attempt.
        
            //Show the guessed letters and produce a "clear" screen.
            cout << string(50,'\n'); //This is a string constructor that produces 50 occurances of a newline
            cout << "Guessed letters:" << guessedLetters << endl;

            //If the user has completed the puzzle, close the loop and congratulate 
            if(puzzle == selectedWord)
            {
                cout << "YOU WIN! The word is \"" << selectedWord << "\" It took you " << numberOfAttempts << " guesses." << endl;
                won = true;
            }
        }
    
    
        //loop for after the user has won the game, asks if they want to play again
        while(won)
        {
            cout << "Play Again? [Y/N]";
            string decision;
            cin >> decision;
            if(decision == "y")
            {
                won = false;
                cout << string(50,'\n');
            }
            else if(decision == "n")
            {
                return 0;
            }
        }
        
    }
    
}



