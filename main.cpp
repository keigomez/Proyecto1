#include <iostream>
#include "Menu.h"
#include "Cliente.h"

int main() {
    string file = "DatosBancoUno.txt";
    Menu *menu = new Menu();
    menu->menuPrincipal();
    delete menu;
    //Cliente* c1 = new Cliente("Maria Paola", 403210456, true, true, false, 3);
   // cout << c1->toString();
   Nodo<Cliente>*raiz;
   ArbolBST<Cliente> arbolBst;
   arbolBst.readFile(raiz, file);
   arbolBst.display();
    return 0;
}
