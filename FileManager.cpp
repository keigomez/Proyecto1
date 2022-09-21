//
// Created by Usuario on 21/9/2022.
//

#include "FileManager.h"

void FileManager::guardar(Cliente &cliente, string &filename) {
    ofstream myFile(filename, ios::app | ios::out);
    myFile<<cliente.getNombre() <<","<<
    cliente.getId() <<","<<
    cliente.getIngresaConNino() <<","<<
    cliente.getEmbarazada() <<","<<
    cliente.getAdultoMayor() <<","<<
    cliente.getCategoria()<<endl;

    myFile.close();
}


ArbolBST<Cliente> FileManager::leer(const string &filename) {
    ArbolBST<Cliente> cliente1;
    int id, categoria;
    bool ingresaNino, embarazada, adultoMayor;
    string nombre, idString, ninoString, embarazadaString, adultoMayorString, categoriaString;

    ifstream myReadFile(filename);
    Cliente cliente;

    if (!myReadFile.is_open()) {
        throw invalid_argument("No se pudo abrir el archivo [" + filename + "]");
    }
    while (!myReadFile.eof()) {
        getline(myReadFile, nombre, ',');
        getline(myReadFile, idString, ',');
        getline(myReadFile, ninoString, ',');
        getline(myReadFile, embarazadaString, ',');
        getline(myReadFile, adultoMayorString, ',');
        getline(myReadFile, categoriaString, '\n');
    }
    if (!myReadFile.eof()) {
        categoria = stoi(categoriaString);
        id = stoi(idString);
        ingresaNino = stoi(ninoString);
        embarazada = stoi(embarazadaString);
        adultoMayor = stoi(adultoMayorString);

        cliente.setNombre(nombre);
        cliente.setId(id);
        cliente.setIngresaConNino(ingresaNino);
        cliente.setEmbarazada(embarazada);
        cliente.setAdultoMayor(adultoMayor);
        cliente.setCategoria(categoria);

        cliente1.insertar(cliente);
    }
    myReadFile.close();
    return cliente1;
}

