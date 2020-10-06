//
//  menu.cpp
//  cs2024HW5
//
//  Created by Gigi Zhou on 9/28/20.
//

#include <iostream>
#include "MenuH.hpp"
using namespace std;
void Menu::showMenu(){
    printf("---- MENU ----\n");
    printf("(1) New Player\n");
    printf("(2) List Player\n");
    printf("(3) Quit\n");
    
    
    
};

MenuItemCode Menu::promptUser(){
    int userInput;
    cout << "Enter Choice> ";
    cin >> userInput;
    switch(userInput){
        case MenuItemCode::cNewPlayer:
            return MenuItemCode::cNewPlayer;
        case MenuItemCode::cListPlayer:
            return MenuItemCode::cListPlayer;
        case MenuItemCode::cQuitItem:
            return MenuItemCode::cQuitItem;
        default:
            return MenuItemCode::cUnknownItem;
    }
}

