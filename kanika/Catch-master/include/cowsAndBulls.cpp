#include "Hider.h"
#include "Hider.cpp"
#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

int main(){
    string words[14]={"quick","quack","junky","juicy","mixup","unzip","crazy","proxy","quash","bumpy","prize","price","block","whack"};
    Hider hider;
    //choose the word randomly from the word array
    string word=hider.pickUpWord(words,14);
    cout<<"Word is "<<word<<endl;
    cout<<"I have picked up a word. We can start!\n";
    string guess;
    int noOfAttempts=0;
    do{
        guess=hider.acceptGuess();
        if(hider.hasTheUserWon(guess,word)){
            return 0;
        }
        noOfAttempts++;
        if(hider.exceededAttempts(noOfAttempts)){
            return 1;
        }
        hider.getBullsCowsCount(guess,word);
    }
    while(true);
}

