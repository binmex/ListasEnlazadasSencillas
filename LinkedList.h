//
// Created by Binmex on 16/11/2021.
//

#ifndef LISTASENLAZADASSENCILLAS_LINKEDLIST_H
#define LISTASENLAZADASSENCILLAS_LINKEDLIST_H

#include <vector>
#include "Node.h"
#include <string>

template <class T>
class LinkedList {
public:
    LinkedList();
    bool isEmpy();
    void addNodeBegin(T);
    void addNodeLast(T);
    std::vector<T> getLinkedList();
    Node<T>* findNode(std::string);
    T* findInfo(std::string);
    void addNodeBeforeTo(Node<T>*,T);
    void addNodeAfterTo(Node<T>*,T);
    void addNodeSorted(T);

    T deleteNode(Node<T>*);

    virtual ~LinkedList();

private:
    Node<T>* head;
};


#endif //LISTASENLAZADASSENCILLAS_LINKEDLIST_H
