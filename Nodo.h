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
    Nodo *left;
    Nodo *right;
public:
    Nodo(tipo dato = nullptr, Nodo *left = nullptr, Nodo *right = nullptr);

    virtual ~Nodo();

    tipo *getDato() const;

    void setDato(tipo *dato);

    Nodo *getLeft() const;

    void setLeft(Nodo *left);

    Nodo *getRight() const;

    void setRight(Nodo *right);
};




#endif //PROYECTO1_NODO_H
