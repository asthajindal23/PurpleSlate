#include "Hider.h"
#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

Hider::Hider(){
}

int Hider::getRandomNumber(int max){
int random;
random=rand()%max;
return random;
}

string Hider::pickUpWord(string listOfWords[], int length){
    //seed the random generator with the time so that we get random values

    srand(time(NULL));
    int random=getRandomNumber(length);
    return listOfWords[random];
}

string Hider::getUserChoice(){
    string userChoice;
    cout<<"Enter your guess: "<<endl;
    cin>>userChoice;
    return userChoice;
}

bool Hider::validateGuess(string guess){
    if(guess.length()!=5){
        cout<<"Enter a word of length 5"<<endl;
        return false;
    }
    bool validGuess=true;
    for(int i=0;i<guess.length();i++){
        char ch=guess[i];
        if(ch<'a'||ch>'z'){
            validGuess=false;
            cout<<"Word should be formed by letters a-z"<<endl;
            break;
        }
        for(int j=0;j<guess.length() && j!=i;j++){
            if(ch==guess[j]){
                validGuess=false;
                cout<<"Repeating characters\n";
                break;
            }
            if(!validGuess)
                break;
        }
    }
    return validGuess;
}

string Hider::acceptGuess(){
    string guess;
    do{
        guess=getUserChoice();
        cout<<"User:"<<guess;
    }
    while(!validateGuess(guess));
    return guess;
}

bool Hider::hasTheUserWon(string guess, string word){
    if(guess==word){
        cout<<"You got it right.."<<endl;
        return true;
    }
    else{
        return false;
    }
}

bool Hider::exceededAttempts(int attempts){
    if(attempts>15){
        cout<<"You have exceeded attempts\n";
        return true;
    }
    return false;
}

int* Hider::getBullsCowsCount(string guess, string word){
    int bullsCount=0, cowsCount=0;
    for(int i=0;i<5;i++){
        char ch=guess[i];
        for(int j=0;j<5;j++){
            if(ch==word[j] && i==j){
                bullsCount++;
                break;
            }
            else if(ch==word[j] &&i!=j){
                cowsCount++;
                break;
            }
        }
    }
    int *counts=new int[2];
    counts[0]=bullsCount;
    counts[1]=cowsCount;
    cout<<"Bulls: "<<bullsCount<<" Cows: "<<cowsCount<<endl;
    return counts;
}
