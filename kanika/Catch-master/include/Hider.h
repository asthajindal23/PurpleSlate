#ifndef HIDER_H_
#define HIDER_H_

#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

class Hider{
public:
    Hider();
    int getRandomNumber(int);
    string pickUpWord(string[],int);
    string getUserChoice();
    bool validateGuess(string);
    string acceptGuess();
    bool hasTheUserWon(string, string);
    bool exceededAttempts(int);
    int* getBullsCowsCount(string, string);
};

#endif /*HIDER_H_*/
