//
// Created by Keiry Ramìrez Gòmez on 20/9/2022.
//

#include "Menu.h"

Menu::Menu() {
    file = new FileManager("DatosBancoUno.txt");
    file->leer("DatosBancoUno.txt");

    menuPrincipal();
}

void Menu::menuPrincipal()  {
    int opcion;

    while (opcion!=7){
        cout << "MENU: " << endl;
        cout << "1- Encolar todos los clientes " << endl;
        cout << "2- Encolar un cliente " << endl;
        cout << "3- Atender los siguientes 5 clientes " << endl;
        cout << "4- Mostrar el siguiente cliente a ser atendido " << endl;
        cout << "5- Simulacion de Atencion de Clientes " << endl;
        cout << "6- Agregar un Cliente Nuevo " << endl;
        cout << "7- Salir " << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> opcion;
        switch (opcion) {
            case 1:

                break;
                system("cls");
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:
                ;
                break;
            case 7:
                exit(0);
                system("cls");
                break;
            default:
                cout<<"LA OPCION SELECCIONADA NO EXISTE";
                break;
        }
    }
}

Menu::~Menu() {

}

void Menu::encolarClientes() {

}

void Menu::encolarUnCliente() {

    int ced;
    cout << "Digite el numero de cedula: ";
    cin >> ced;
    Nodo<Cliente> *cl = new Nodo<Cliente>();
    Cliente *cliente1;
    cliente1 = arbol->buscarPorCedula(cl, ced);
    HeapPriorityQueue<Cliente, EsMenor<Cliente>> p;
    //p.insert(cliente1);

}
