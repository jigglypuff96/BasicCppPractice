//
//  BaseballTeam.hpp
//  CS2024HW5
//
//  Created by Gigi Zhou on 10/4/20.
//

#ifndef BaseballTeam_hpp
#define BaseballTeam_hpp
#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
class BaseballTeam
{
    public:
        void newPlayer();
        void listPlayers();
        void cleanup();
    private:
    // Only member variable is a vector of BaseballPlayer pointers
        vector<BaseballPlayer *> mPlayers;
};
#endif /* BaseballTeam_hpp */
