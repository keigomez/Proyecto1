//
// Created by Usuario on 21/9/2022.
//

#include "ArbolBST.h"
#include "Cliente.h"

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::insertar(tipo *dato, Nodo<tipo> *t) {
    //dato = elemento a insertar
    if(t == nullptr){
        t = new Nodo<tipo>(dato);
    }
    //revisar esto...
    else if( dato < t->getDato())
        t->setLeft(insertar(dato, t->getLeft()));
    else if(dato > t->getDato())
        t->setRight(insertar(dato, t->getRight()));

    return t;
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::remover(tipo *dato, Nodo<tipo> *t) {
    return nullptr;
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::buscar(Nodo<tipo> *t, tipo *dato) {
    if(t == nullptr)
        return nullptr;
    else if(dato < t->getData())
        return buscar(t->getLeft(), dato);
    else if(dato > t->getData())
        return buscar(t->getRight(),dato);
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
void ArbolBST<tipo>::insertar(tipo *dato) {
    raiz = insertar(dato, raiz);
}

template<class tipo>
void ArbolBST<tipo>::remover(tipo *dato) {

}

template<class tipo>
void ArbolBST<tipo>::busca(tipo *dato) {
    raiz = buscar(raiz, dato);
}

template<class tipo>
Cliente * ArbolBST<tipo>::buscarPorCedula(Nodo<tipo> *t, int ced) {
    if(t == nullptr)
        return nullptr;
    else if(t->getDato()->getId() == ced){
        return t->getDato();
    }
    else if(ced < t->getDato()->getId()) {
        return buscarPorCedula(t->getLeft(), ced);
    }
    else {
        return buscarPorCedula(t->getRight(), ced);
    }
}

template<class tipo>
void ArbolBST<tipo>::readFile(Nodo<tipo> *t, ifstream &file) {

    if (!file.is_open()) {
        throw invalid_argument("Could not open the file ");
    }
    while(!file.eof()){
        Nodo<tipo> *nuevo = new Nodo<tipo>;
        insertar(t->getDato(), nuevo);
    }
    file.close();
}

template<class tipo>
void ArbolBST<tipo>::saveFile(Nodo<tipo>*t, ofstream &file) {
    if(t!=NULL){
        saveFile(t->getLeft(), file);
        file<<t->getDato()<<",";
        saveFile(t->getRight(), file);
    }
}

