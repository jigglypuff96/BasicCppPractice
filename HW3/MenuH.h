//
//  main.h
//  cs2024HW3
//  A menu class is defined.
//  An enum user defined data type that defines several constants:
//  cUnknownItem, cPrintMyNameItem, cSquareANumberItem, cQuitItem
//
//  Created by Jijie Zhou on 9/21/20.
//

#ifndef main_h
#define main_h

enum MenuItemCode {
    cUnknownItem,            // Values are optional,default is 0
    cPrintMyNameItem,        // If a value is not present,
    cSquareANumberItem,      // assign previous value + 1
    cQuitItem,
};

class Menu{
    public:
        void showMenu();
        MenuItemCode promptUser();
        
};
#endif /* main_h */
