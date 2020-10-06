//
//  BaseballPlayer.cpp
//  CS2024HW4
//
//  Created by Gigi Zhou on 9/28/20.
//

#include "BaseballPlayerH.hpp"

BaseballPlayer::BaseballPlayer(){
    atBats = 0;
    singles = 0;
    doubles = 0;
    triples = 0;
    homeruns = 0;
}
void BaseballPlayer::addSingle(){
    atBats++;
    singles++;
}
void BaseballPlayer::addDouble(){
    atBats++;
    doubles++;
}
void BaseballPlayer::addTriple(){
    atBats++;
    triples++;
}
void BaseballPlayer::addHomeRun(){
    atBats++;
    homeruns++;
}
void BaseballPlayer::addOut(){
    atBats++;
}
void BaseballPlayer::printStats(){
    double battingAve = 0.0;
    if (atBats!=0){
        battingAve = (double)(singles + doubles + triples + homeruns) / atBats;
    }


    printf("At Bats:   %d\n",atBats);
    printf("Singles:   %d\n",singles);
    printf("Doubles:   %d\n",doubles);
    printf("Triples:   %d\n",triples);
    printf("Home Runs:   %d\n",homeruns);
    printf("------------------------\n");
    printf("BATTING AVE: %0.1f\n",battingAve);
    printf("------------------------\n");
}
