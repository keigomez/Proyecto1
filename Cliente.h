//
// Created by Keiry Ramìrez Gòmez on 20/9/2022.
//

#ifndef PROYECTO1_CLIENTE_H
#define PROYECTO1_CLIENTE_H
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Cliente {
private:
    string nombre;
    int id;
    bool ingresaConNino;
    bool embarazada;
    bool adultoMayor;
    int categoria;
public:
    Cliente(const string &nombre , int id, bool ingresaConNino, bool embarazada, bool adultoMayor, int categoria );
    virtual ~Cliente();
    const string &getNombre() const;
    void setNombre(const string &nombre);
    int getId() const;
    void setId(int id);
    bool getIngresaConNino() const;
    void setIngresaConNino(bool ingresaConNino);
    bool getEmbarazada() const;
    void setEmbarazada(bool embarazada);
    bool getAdultoMayor() const;
    void setAdultoMayor(bool adultoMayor);
    int getCategoria() const;
    void setCategoria(int categoria);
    string ifIngresaConNino();
    string isEmbarazada();
    string isAdultoMayor();
    string tieneCategoria();

    string toString();


};


#endif //PROYECTO1_CLIENTE_H
