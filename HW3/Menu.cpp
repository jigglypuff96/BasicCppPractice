//
//  menu.cpp
//  cs2024HW3
//
//  Created by Gigi Zhou on 9/23/20.
//

#include <iostream>
#include "MenuH.h"
using namespace std;
void Menu::showMenu(){
    printf("---- MENU ----\n");
    printf(" (%d) Print My Name 3 Times\n",1);
    printf(" (%d) Square A Number\n",2);
    printf(" (%d) QuitEnter\n",3);
};

MenuItemCode Menu::promptUser(){
    int userInput;
    cout << "Enter Choice> ";
    cin >> userInput;
    switch(userInput){
        case MenuItemCode::cPrintMyNameItem:
            return MenuItemCode::cPrintMyNameItem;
        case MenuItemCode::cSquareANumberItem:
            return MenuItemCode::cSquareANumberItem;
        case MenuItemCode::cQuitItem:
            return MenuItemCode::cQuitItem;
        default:
            return MenuItemCode::cUnknownItem;
    }
}

