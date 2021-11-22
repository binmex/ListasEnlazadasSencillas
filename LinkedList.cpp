//
// Created by Binmex on 16/11/2021.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<class T>
bool LinkedList<T>::isEmpy() {
    return head == NULL;
}

template<class T>
void LinkedList<T>::addNodeBegin(T info) {
    Node<T> *node = new Node<T>(info);
    if (isEmpy()) { //si la cabeza esta vacia
        head = node; //el nodo es la nueva cabeza
    } else {
        node->next = head;
        head = node;
    }
}

template<class T>
void LinkedList<T>::addNodeLast(T info) {
    Node<T> *node = new Node<T>(info);
    if (isEmpy()) { //si la cabeza esta vacia
        head = node; //el nodo es la nueva cabeza
    } else {
        Node<T> *aux = head;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = node;
    }
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    std::vector<T> out;
    Node<T> *aux = head; //definir una variable del mismo tipo de cabeza
    while (aux != NULL) {
        out.push_back(aux->info);//push back agregar al vector
        aux = aux->next;
    }
    return out;
}


template<class T>
Node<T> *LinkedList<T>::findNode(std::string id) {
    Node<T> *aux = head;
    while (aux != NULL) {
        if (aux->info.getName().compare(id) == 0) {
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
T *LinkedList<T>::findInfo(std::string id) {
    Node<T> *aux = head; //recorrer
    while (aux != NULL) {
        if (aux->info.getName().compare(id) == 0) {
            return &aux->info;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *before, T info) {
    Node<T> node = new Node<T>(info);
    if (before == head) {
        node->next = head;
        head = node;
    } else {
        Node<T> *act = head;
        while (act->next != before) {
            act = act->next;
        }
        node->next = node;
    }
}

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> *after, T info) {
    Node<T>* node = new Node<T>(info);
    node->next = after->next;
    after->next = node;
}

template<class T>
void LinkedList<T>::addNodeSorted(T info) {
    Node<T>* nodenew = new Node<T>(info);
    if (isEmpy()){
        head = nodenew;

    } else{
        Node<T>* act = head;
        Node<T>* ant = NULL;
        while (act != NULL && info.getName().compare(act->info.getName()) > 0){
            ant = act;
            act = act->next;
        }
        if (ant == NULL){
            head = nodenew;
        } else{
            ant->next = nodenew;
        }
        nodenew->next = act;
    }
}

template<class T>
T LinkedList<T>::deleteNode(Node<T> *node) {
    T out = node->info;
    if(node == head){
        head = head->next;
    } else{
        Node<T>* aux = head;
        while (aux->next != node){
            aux = aux->next;
        }
        aux->next = node;
    }
    //delete(node);
    //return node;
}

template<class T>
LinkedList<T>::~LinkedList() {
    Node<T> *act = head;
    Node<T> *aux = NULL;
    while (act != NULL) {
        aux = act;
        act = act->next;
        delete (aux);
    }

}









