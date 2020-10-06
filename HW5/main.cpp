/*
 * CS2024 –Assignment #5
 * Jijie Zhou
 * jz888
 *
 *
 */

#include <iostream>
#include "MenuH.hpp"
#include "BaseballPlayerH.hpp"
#include "BaseballTeamH.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Menu my_menu;
    BaseballTeam newTeam;
    int userInput;
    do {
        my_menu.showMenu();
        userInput = my_menu.promptUser();
        switch (userInput) {
            case MenuItemCode::cNewPlayer:
                newTeam.newPlayer();
                break;
            case MenuItemCode::cListPlayer:
                newTeam.listPlayers();
                break;
            case MenuItemCode::cQuitItem:
                newTeam.cleanup();
                printf("Quitting\n");
                break;

            default:
                printf("Unknown selection\n");
                break;
        }
    }
    while (userInput != MenuItemCode::cQuitItem);
    return 0;
}
