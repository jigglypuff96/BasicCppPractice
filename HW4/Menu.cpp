//
//  menu.cpp
//  cs2024HW4
//
//  Created by Gigi Zhou on 9/28/20.
//

#include <iostream>
#include "MenuH.hpp"
using namespace std;
void Menu::showMenu(){
    printf("---- MENU ----\n");
    printf("(1) Add Single\n");
    printf("(2) Add Double\n");
    printf("(3) Add Triple\n");
    printf("(4) Add Home Run\n");
    printf("(5) Add Out\n");
    printf("(6) Print Stats\n");
    printf("(7) Quit\n");
    
    
    
};

MenuItemCode Menu::promptUser(){
    int userInput;
    cout << "Enter Choice> ";
    cin >> userInput;
    switch(userInput){
        case MenuItemCode::cAddSingle:
            return MenuItemCode::cAddSingle;
        case MenuItemCode::cAddDouble:
            return MenuItemCode::cAddDouble;
        case MenuItemCode::cAddTriple:
            return MenuItemCode::cAddTriple;
        case MenuItemCode::cAddHomeRun:
            return MenuItemCode::cAddHomeRun;
        case MenuItemCode::cAddOut:
            return MenuItemCode::cAddOut;
        case MenuItemCode::cPrintStats:
            return MenuItemCode::cPrintStats;
        case MenuItemCode::cQuitItem:
            return MenuItemCode::cQuitItem;
        default:
            return MenuItemCode::cUnknownItem;
    }
}

