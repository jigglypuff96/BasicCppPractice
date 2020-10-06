//
//  main.h
//  cs2024HW5
//  A menu class is defined.
//  An enum user defined data type that defines several constants:
//  cUnknownItem,cAddSingle,cAddDouble,cAddTriple,cAddHomeRun,cAddOut,cPrintStats,cQuitItem,
//
//  Created by Jijie Zhou on 9/28/20.
//

#ifndef main_h
#define main_h

enum MenuItemCode{
    cUnknownItem,
    cNewPlayer,
    cListPlayer,
    cQuitItem,
};

class Menu{
    public:
        void showMenu();
        MenuItemCode promptUser();
        
};
#endif /* main_h */
