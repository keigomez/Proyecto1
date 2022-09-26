//
// Created by Usuario on 21/9/2022.
//

#ifndef PROYECTO1_ARBOLBST_H
#define PROYECTO1_ARBOLBST_H
#include "Nodo.cpp"
#include "Cliente.h"

template<class tipo>
class ArbolBST {
private:
    Nodo<tipo> *raiz;

    //se hacen privados por seguridad
    Nodo<tipo> *insertar(tipo *dato, Nodo<tipo>* t);
    Nodo<tipo> *remover(tipo *dato, Nodo<tipo>* t);
    Nodo<tipo> *buscar(Nodo<tipo>* t, tipo *dato);

public:
    ArbolBST();

    virtual ~ArbolBST();

    void insertar(tipo *dato);

    void remover(tipo *dato);

    void busca(tipo *dato);

    Cliente * buscarPorCedula(Nodo<tipo> *t, int ced);

    void readFile(Nodo<tipo>*t, ifstream &file);

    void saveFile(Nodo<tipo>*t,ofstream &file );

};




#endif //PROYECTO1_ARBOLBST_H
