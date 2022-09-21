#include <iostream>
#include "Menu.h"
#include "Cliente.h"

int main() {
    Menu *menu = new Menu();
    menu->menuPrincipal();
    delete menu;
    //Cliente* c1 = new Cliente("Maria Paola", 403210456, true, true, false, 3);
   // cout << c1->toString();
    return 0;
}
