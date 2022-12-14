//
// Created by Usuario on 21/9/2022.
//

#ifndef PROYECTO1_FILEMANAGER_H
#define PROYECTO1_FILEMANAGER_H
#include "ArbolBST.cpp"
#include "Cliente.h"
#include <fstream>



class FileManager {
private:
    string filename;
public:
    FileManager(string filename);

    static void guardar(Cliente& cliente, string& filename);

    static ArbolBST<Cliente>leer(const string& filename);

};


#endif //PROYECTO1_FILEMANAGER_H
