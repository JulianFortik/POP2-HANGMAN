/*************************************************************
 *  Instructor's Name: Mrs. Vernelle Sylvester                                 *
 *  Group Members: Lianni Mathews, Jason Fortik                         *
 *  Project: Hangman                                                                          *
 *  Description: Hangman utilizes object oriented programming    *
 *  to create an object that stores the statistics that are being        *
 *  generated and also uses classes to separate the functions and  *
 *  their declarations as libraries outside the main file                   *
 *  Due Date: March 25,2021                                                             *
 *************************************************************/
#include "player.h"
#include "hangman.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string username;
    cout<<"Please enter your username: ";
    cin>>username;
    Hangman game("wordlist.txt",username);
    game.startGame();

    return 0;
}
