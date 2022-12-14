//
// Created by Usuario on 24/9/2022.
//

#ifndef PROYECTO1_HEAPPRIORITYQUEUE_H
#define PROYECTO1_HEAPPRIORITYQUEUE_H
#include "VectorCompleteTree.h"
#include "ArbolBST.h"

template<typename E, typename C>
class HeapPriorityQueue{
public:
    void insert(E * e);
    const E& min();
private:
    ArbolBST<E> A;
    C isLess; //comparador si es menor

};

/*template<typename E, typename C>
int HeapPriorityQueue<E, C>::size() const {
    return T.size();
}

template<typename E, typename C>
bool HeapPriorityQueue<E, C>::empty() const {
    return size() == 0;
}*/

template<typename E, typename C>
void HeapPriorityQueue<E, C>::insert(E *e) {
    T.addLast(e); //add e to the heap
    Position v = T.last(); //e's position
    while (!T.isRoot(v)){ //up-heap bubbling
        Position u = T.parent(v);
        if(!isLess(*v, *u)) break; //if v in order, we're done
        T.swap(v,u); //... else swap with parent
        v = u;
    }
}

template<typename E, typename C>
const E &HeapPriorityQueue<E, C>::min() {
    return *(A.getRaiz());
}

/*template<typename E, typename C>
void HeapPriorityQueue<E, C>::removeMin() {
    if(size() == 1)// only one node?
        T.removeLast();
    else{
        Position u = T.root(); //root position
        T.swap(u,T.last()); //swap last with root
        T.removeLast(); //and remove last
        while(T.hasLeft(u)){ //down-heap bubbling
            Position v =T.left(u);
            if(T.hasRight(u) && isLess(*(T.right(u)), *v))
                v = T.right(u); //v is u's smaller child
            if(isLess(*v,*u)){ // is u out of order?
                T.swap(u,v);//..then swap
                u = v;
            }else break; //else we're done

        }
    }
}*/

template<typename E>
class EsMenor{ //comparador abajo a arriba
public:
    bool operator()(const E& p, const E&q) const{
        return p<q;
    }
};
#endif //PROYECTO1_HEAPPRIORITYQUEUE_H
