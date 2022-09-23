//
// Created by Usuario on 21/9/2022.
//

#include "Nodo.h"
template<class tipo>
Nodo<tipo>::Nodo(tipo *dato, Nodo *left, Nodo *rigth): dato(dato), left(left), right(right) {

}

template<class tipo>
Nodo<tipo>::~Nodo() {

}

template<class tipo>
tipo *Nodo<tipo>::getDato() const {
    return dato;
}

template<class tipo>
void Nodo<tipo>::setDato(tipo *dato) {
    Nodo::dato = dato;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getLeft() const {
    return left;
}

template<class tipo>
void Nodo<tipo>::setLeft(Nodo *left) {
    Nodo::left = left;
}

template<class tipo>
Nodo<tipo> *Nodo<tipo>::getRight() const {
    return right;
}

template<class tipo>
void Nodo<tipo>::setRight(Nodo *right) {
    Nodo::right = right;
}





