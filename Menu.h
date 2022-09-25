//
// Created by Keiry Ramìrez Gòmez on 20/9/2022.
//

#ifndef PROYECTO1_MENU_H
#define PROYECTO1_MENU_H
#include <iostream>
using namespace std;
#include "FileManager.h"
#include "HeapPriorityQueue.h"

class Menu {
private:
    FileManager* file;
    ArbolBST<Cliente>* arbol = new ArbolBST<Cliente>();

public:
    Menu();
    void menuPrincipal();
    virtual ~Menu();
    void encolarClientes();
    void encolarUnCliente();





};


#endif //PROYECTO1_MENU_H
