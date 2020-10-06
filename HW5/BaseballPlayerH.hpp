//
//  BaseballPlayer.hpp
//  CS2024HW5
//
//  Created by Gigi Zhou on 9/28/20.
//

#ifndef BaseballPlayer_hpp
#define BaseballPlayer_hpp
#include <stdio.h>
#include <iostream>
#include "BaseballPlayerH.hpp"
using namespace std;
class BaseballPlayer {
    public:
        BaseballPlayer(string name, string postion);
        void randomAtBat();
        void printStats();
        string playerName;
        string playerPosition;
    private:
        int atBats;
        int singles;
        int doubles;
        int triples;
        int homeruns;
        
};

#endif /* BaseballPlayer_hpp */
