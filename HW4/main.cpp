/*
 * CS2024 –Assignment #4
 * Jijie Zhou
 * jz888
 *
 *
 */

#include <iostream>
#include "MenuH.hpp"
#include "BaseballPlayerH.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Menu my_menu;
    BaseballPlayer newPlayer;
    int userInput;
    do {
        my_menu.showMenu();
        userInput = my_menu.promptUser();
        switch (userInput) {
            case MenuItemCode::cAddSingle:
                newPlayer.addSingle();
                printf("Single added.\n");
                break;
            case MenuItemCode::cAddDouble:
                newPlayer.addDouble();
                printf("Double added.\n");
                break;
            case MenuItemCode::cAddTriple:
                newPlayer.addTriple();
                printf("Triple added.\n");
                break;
            case MenuItemCode::cAddHomeRun:
                newPlayer.addHomeRun();
                printf("HomeRun added.\n");
                break;
            case MenuItemCode::cAddOut:
                newPlayer.addOut();
                printf("Out added.\n");
                break;
            case MenuItemCode::cPrintStats:
                newPlayer.printStats();
                break;
                

            case MenuItemCode::cQuitItem:
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
