/*
 * CS2024 –Assignment #3
 * Jijie Zhou
 * jz888
 *
 * 
 */

#include <iostream>
#include "MenuH.h"
using namespace std;

void printMyName(string name){
    /* Simply prints out the menu to the user.   It determines the “number” to put in parenthesis before each menu choice, but as an “advanced hint” you should make this number match up with whatever the enumerated constant is for the corresponding menu choice (for example, if cQuitItemis going to have an integer value of 3, then the “Quit” option should be shown as “ (3) Quit”).*/
    for (int i = 0; i < 3; i++){
        cout << name << endl;
    }
}
void squareANumber(){
    /*This will prompt the user for a choice, accept an integer as input (don’t worry if the user doesn’t type in an integer, just let everything fail) and then will return the corresponding enumerated constantfor the value entered.  So, for example, if cQuitItemends up being “3” and the user enters a “3”, this function should return cQuitItem.  Note that the return type is MenuItemCode, so you must use this as the name of your enumeration and you must return the enumerated constant (such as cQuitItem) instead of the actual integer value (such as 3).  If the user enters a valid integer that doesn’t correspond to any of the menu choices, you should return cUnknownItem.*/
    int number2Suare;
    cout << "Enter a number and I will return the square of the number: " ;
    cin >>number2Suare;
    int square = pow(number2Suare,2);
    cout <<square<<endl;
}


int main(int argc, const char * argv[]) {
    Menu my_menu;
    string myName = "Jijie";
    int userInput;
    do {
        my_menu.showMenu();
        userInput = my_menu.promptUser();
        switch (userInput) {
            case MenuItemCode::cPrintMyNameItem:
                printMyName(myName);
                break;
            case MenuItemCode::cSquareANumberItem:
                squareANumber();
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
