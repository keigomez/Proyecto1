//
// Created by Usuario on 21/9/2022.
//
#include <iostream>
#include <sstream>
#include "string"
using namespace std;

#ifndef PROYECTO1_NODO_H
#define PROYECTO1_NODO_H

template<class tipo>
class Nodo {
private:
    tipo *dato;
    Nodo *siguiente;
public:
    Nodo();

    virtual ~Nodo();

    tipo *getDato() const;

    void setDato(tipo *dato);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *siguiente);
};




#endif //PROYECTO1_NODO_H
