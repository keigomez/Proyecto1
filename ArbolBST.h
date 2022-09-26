//
// Created by Usuario on 21/9/2022.
//

#ifndef PROYECTO1_ARBOLBST_H
#define PROYECTO1_ARBOLBST_H
#include "Nodo.cpp"
#include "Cliente.h"
template<class tipo>
class iterador;


template<class tipo>
class ArbolBST {
private:
    Nodo<tipo> *raiz;

    //se hacen privados por seguridad
    Nodo<tipo> *insertar(tipo *dato, Nodo<tipo>* t);
    Nodo<tipo> *remover(tipo *dato, Nodo<tipo>* t);
    Nodo<tipo> *buscar(Nodo<tipo>* t, tipo *dato);

public:

    Nodo<tipo> *getRaiz() const;

    ArbolBST();

    virtual ~ArbolBST();

    void insertar(tipo *dato);

    void remover(tipo *dato);

    void busca(tipo *dato);

    Cliente * buscarPorCedula(Nodo<tipo> *t, int ced);

    void readFile(Nodo<tipo>*t, string &file);

    void saveFile(Nodo<tipo>*t,string &file );

    void inorder(Nodo<tipo>*t);

    void preorder(Nodo<tipo>*t);

    void postorder(Nodo<tipo>*t);

    Nodo<tipo>* findMin(Nodo<tipo>*t);
    Nodo<tipo>* findMax(Nodo<tipo>*t);

    void display();

};


template<class tipo>
class iterador{
public:
    iterador(Nodo<tipo>*);

    virtual bool masElementos() const;
    virtual int proximoElemento();

private:
    Nodo<tipo>* cursor;
};

template<class tipo>
bool iterador<tipo>::masElementos() const {
    return (cursor != NULL);
}

template<class tipo>
iterador<tipo>::iterador(Nodo<tipo> *primero):cursor(primero) {
}

template<class tipo>
int iterador<tipo>::proximoElemento() {
    tipo dato = cursor->getDato();
    cursor = cursor->getLeft();
    cursor = cursor->getRight();
    return dato;
}


#endif //PROYECTO1_ARBOLBST_H
