//
// Created by Usuario on 21/9/2022.
//

#ifndef PROYECTO1_ARBOLBST_H
#define PROYECTO1_ARBOLBST_H
#include "Nodo.h"

template<class tipo>
class ArbolBST {
private:
    Nodo<tipo> *raiz;

    //se hacen privados por seguridad
    Nodo<tipo> *insertar(tipo dato,Nodo<tipo>* t);
    Nodo<tipo> *remover(tipo dato,Nodo<tipo>* t);
    Nodo<tipo> *buscar(Nodo<tipo>* t, tipo dato);

public:
    ArbolBST();

    virtual ~ArbolBST();

    void insertar(tipo dato);

    void remover(tipo dato);

    void busca(tipo dato);

};




#endif //PROYECTO1_ARBOLBST_H