//
// Created by Usuario on 21/9/2022.
//

#include "Nodo.h"
template<class tipo>
Nodo<tipo>::Nodo() {

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
Nodo<tipo> *Nodo<tipo>::getSiguiente() const {
    return siguiente;
}

template<class tipo>
void Nodo<tipo>::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}
