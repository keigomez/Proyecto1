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
void ArbolBST<tipo>::readFile(Nodo<tipo> *t, string &file) {

    ifstream myFile(file);
    if (!myFile.is_open()) {
        throw invalid_argument("Could not open the file ");
    }
    while(!myFile.eof()){
        Nodo<tipo> *nuevo = new Nodo<tipo>;
        insertar(t->getDato(), nuevo);
    }
    myFile.close();
}

template<class tipo>
void ArbolBST<tipo>::saveFile(Nodo<tipo>*t, string &file) {
    ofstream myFile(file, ios::app | ios::out);
    if(t!=NULL){
        saveFile(t->getLeft(), file);
        myFile<<t->getDato()<<",";
        saveFile(t->getRight(), file);
    }
}

template<class tipo>
void ArbolBST<tipo>::inorder(Nodo<tipo>*t) {
    if(t == nullptr)
        return;
    inorder(t->getLeft());
    cout<<t->getDato()<<" ";
    inorder(t->getRight());
}

template<class tipo>
void ArbolBST<tipo>::display() {
    inorder(raiz);
    cout<<endl;
}

template<class tipo>
void ArbolBST<tipo>::preorder(Nodo<tipo> *t) {
    if(t == nullptr)
        return;
    cout<<t->getDato()<<" ";
    preorder(t->getLeft());
    preorder(t->getRight());
}

template<class tipo>
void ArbolBST<tipo>::postorder(Nodo<tipo> *t) {
    if(t == nullptr)
        return;
    preorder(t->getLeft());
    preorder(t->getRight());
    cout<<t->getDato()<<" ";
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::findMax(Nodo<tipo> *t) {
    if(t == nullptr)
        return nullptr;
    else if(t->getRight() == nullptr)
        return t;
    else
        return findMin(t->getRight());
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::findMin(Nodo<tipo> *t) {
    //irse lo mas a la izq
    if(t == nullptr)
        return nullptr;
    else if(t->getLeft() == nullptr)
        return t;
    else
        return findMin(t->getLeft());
}

template<class tipo>
Nodo<tipo> *ArbolBST<tipo>::getRaiz() const {
    return raiz;
}



