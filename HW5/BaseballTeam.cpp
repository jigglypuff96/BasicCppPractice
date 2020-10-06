//
//  BaseballTeam.cpp
//  CS2024HW5
//
//  Created by Gigi Zhou on 10/4/20.
//

#include "BaseballPlayerH.hpp"
#include "BaseballTeamH.hpp"
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void BaseballTeam::newPlayer(){
    cout << "---- NEW PLAYER ----" <<endl;
    string name, position;
    cin.ignore(1,'\n');
    cout << "ENTER NAME: ";
//    cin >>name;
    getline(cin, name);
    cout << "ENTER POSITION: ";
//    cin >> position;
    getline(cin, position);
    BaseballPlayer* playerNew = new BaseballPlayer(name, position);
    mPlayers.push_back(playerNew);
}

void BaseballTeam::listPlayers(){
    for (auto player:mPlayers){
        cout << "-------------------------------------------\n" << endl;
        cout << "Player: " << player->playerName << endl;
        cout << "Position: " << player->playerPosition << endl;
        cout << "-------------------------------------------\n" << endl;
        player->printStats();
        cout << "-------------------------------------------\n" << endl;
    }
    
}

void BaseballTeam::cleanup(){
    for (auto player:mPlayers){
        delete player;
    }
}
