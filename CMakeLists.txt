cmake_minimum_required(VERSION 3.21)
project(Proyecto1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto1 main.cpp Cliente.cpp Cliente.h Menu.cpp Menu.h Nodo.h Nodo.cpp ArbolBST.h ArbolBST.cpp FileManager.h FileManager.cpp VectorCompleteTree.h HeapPriorityQueue.h)
