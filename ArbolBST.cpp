//
// Created by Usuario on 21/9/2022.
//

#include "ArbolBST.h"
template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::insertar(tipo dato, Nodo<tipo> *t) {
    //dato = elemento a insertar
    if(t == nullptr){
        t = new Nodo<tipo>(dato);
    }
    //revisar esto...
    else if(dato < t->getDato())
        t->setLeft(dato, t->getLeft());
    else if(dato > t->getData())
        t->setRight(insert(dato,t->getRight()));
    return t;
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::remover(tipo dato, Nodo<tipo> *t) {
    return nullptr;
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::buscar(Nodo<tipo> *t, tipo dato) {
    if(t == nullptr)
        return nullptr;
    else if(dato < t->getData())
        return find(t->getLeft(),dato);
    else if(dato > t->getData())
        return find(t->getRight(),dato);
    else
        return t;
}

template<class tipo>
ArbolBST<tipo>::ArbolBST() {
    raiz = nullptr;
}

template<class tipo>
ArbolBST<tipo>::~ArbolBST() {

}

template<class tipo>
void ArbolBST<tipo>::insertar(tipo dato) {
    raiz = insertar(dato,raiz);
}

template<class tipo>
void ArbolBST<tipo>::remover(tipo dato) {

}

template<class tipo>
void ArbolBST<tipo>::busca(tipo dato) {
    raiz = buscar(raiz,dato);
}


