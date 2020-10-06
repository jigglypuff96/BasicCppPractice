//
//  BaseballPlayer.cpp
//  CS2024HW4
//
//  Created by Gigi Zhou on 9/28/20.
//

#include "BaseballPlayerH.hpp"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

BaseballPlayer::BaseballPlayer(string name, string position){
    atBats = 0;
    singles = 0;
    doubles = 0;
    triples = 0;
    homeruns = 0;
    playerName = name;
    playerPosition = position;
    BaseballPlayer::randomAtBat();
    BaseballPlayer::randomAtBat();
    BaseballPlayer::randomAtBat();
}

void BaseballPlayer::randomAtBat() {
    int result = rand() % 7;
    atBats++;
    if (result == 1)
        singles++;
    else if (result == 2)
        doubles++;
    else if (result == 3)
        triples++;
    else if (result == 4)
        homeruns++;
}
void BaseballPlayer::printStats(){
    double battingAve = 0.0;
    if (atBats!=0){
        battingAve = (double)(singles + doubles + triples + homeruns) / atBats;
    }
    
    printf("AB: %d 1B: %d 2B: %d 3B: %d HR: %d AVE: %0.6f\n",atBats,singles,doubles,triples,homeruns,battingAve);

}
