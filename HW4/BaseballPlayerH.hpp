//
//  BaseballPlayer.hpp
//  CS2024HW4
//
//  Created by Gigi Zhou on 9/28/20.
//

#ifndef BaseballPlayer_hpp
#define BaseballPlayer_hpp

#include <stdio.h>
class BaseballPlayer {
    public:
         BaseballPlayer();
         float getBattingAverage();
         void addSingle();
         void addDouble();
         void addTriple();
         void addHomeRun();
         void addOut();
         void printStats();
    private:
         int atBats;
         int singles;
         int doubles;
         int triples;
         int homeruns;
};
#endif /* BaseballPlayer_hpp */
