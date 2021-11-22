//
// Created by Binmex on 16/11/2021.
//

#ifndef LISTASENLAZADASSENCILLAS_NODE_H
#define LISTASENLAZADASSENCILLAS_NODE_H

template <class T> class LinkedList;//declaracion para clase amiga
template<class T>
class Node {
    friend class LinkedList<T>; //clase amiga permite acceder a los metodos y argumentos privados

public:
    Node(const T &info) : info(info) {
        next = NULL;
    }

    virtual ~Node() {

    }

private:
    T info;
    Node<T>* next;
};


#endif //LISTASENLAZADASSENCILLAS_NODE_H
