//
// Created by Keiry Ramìrez Gòmez on 20/9/2022.
//

#include "Cliente.h"


Cliente::Cliente(const string &nombre, int id, bool ingresaConNino, bool embarazada, bool adultoMayor, int categoria)
: nombre(nombre), id(id), ingresaConNino(ingresaConNino), embarazada(embarazada), adultoMayor(adultoMayor), categoria(categoria){

}

Cliente::~Cliente() {

}

const string &Cliente::getNombre() const {
    return nombre;
}

void Cliente::setNombre(const string &nombre) {
    Cliente::nombre = nombre;
}

int Cliente::getId() const {
    return id;
}

void Cliente::setId(int id) {
    Cliente::id = id;
}

bool Cliente::getIngresaConNino() const {
    return ingresaConNino;
}

void Cliente::setIngresaConNino(bool ingresaConNino) {
    Cliente::ingresaConNino = ingresaConNino;
}

bool Cliente::getEmbarazada() const {
    return embarazada;
}

void Cliente::setEmbarazada(bool embarazada) {
    Cliente::embarazada = embarazada;
}

bool Cliente::getAdultoMayor() const {
    return adultoMayor;
}

void Cliente::setAdultoMayor(bool adultoMayor) {
    Cliente::adultoMayor = adultoMayor;
}

int Cliente::getCategoria() const {
    return categoria;
}

void Cliente::setCategoria(int categoria) {
    Cliente::categoria = categoria;
}

string Cliente::toString() {
    stringstream output;
    output << "---Datos del Cliente---" << endl;
    output <<"Nombre: " << getNombre() << endl;
    output <<"Id: " << getId() << endl;
    output <<"Ingresa con un ni" << char(164) << "o: " << ifIngresaConNino() << endl;
    output <<"Esta embarazada: " << isEmbarazada() << endl;
    output <<"Es adulto mayor: " << isAdultoMayor() << endl;
    output <<"Categoria: " << tieneCategoria() << endl;
    return output.str();
}

string Cliente::ifIngresaConNino() {
   if(ingresaConNino){
       return "yes";
   }
    return "no";
}

string Cliente::isEmbarazada() {
    if(embarazada){
        return "yes";
    }
    return "no";
}

string Cliente::isAdultoMayor() {
    if(adultoMayor){
        return "yes";
    }
    return "no";
}

string Cliente::tieneCategoria() {

    if (categoria == 1){
        return "premium";
    }
    else if (categoria == 2) {
            return "oro";
    }
    return "normal";

}

Cliente::Cliente() {}


