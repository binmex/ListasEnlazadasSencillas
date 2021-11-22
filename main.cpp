#include <iostream>
#include "LinkedList.cpp" //estructura de datos dinamicas con clases genericas
#include "Empleado.h"
using namespace std;
int main() {
//    LinkedList<int> *linked = new LinkedList<int>();
//    linked->addNodeBegin(72);
//    linked->addNodeBegin(54);
//    linked->addNodeBegin(15);
//    linked->addNodeBegin(10);
//
//    for (int number : linked->getLinkedList()) {
//        cout<<number<<"\t";
//    }
//    cout<<endl;
//    LinkedList<int> *other = new LinkedList<int>();
//    other->addNodeLast(98);
//    other->addNodeLast(78);
//    other->addNodeLast(68);
//    other->addNodeLast(58);
//
//    for (int number : other->getLinkedList()) {
//        cout<<number<<"\t";
//    }
//    cout<<endl;

    LinkedList<Empleado>* emple = new LinkedList<Empleado>();
    emple->addNodeBegin(Empleado("Lucas",111,"Gerente"));
    emple->addNodeBegin(Empleado("Matias",222,"Sub Gerente"));
    emple->addNodeBegin(Empleado("Maria",333,"Diseñador"));


    if (emple->findNode("Lucas")){
        cout<<"El nodo existe XD"<<endl;
    } else{
        cout<<"El nodo no existe";
    }

   //emple->addNodeBeforeTo(emple->findNode("Lucas"),Empleado("Tomas",444,"Mensajero"));

   // emple->addNodeAfterTo(emple->findNode("maria"), emple("Santiago",444,"tecnico"));

   LinkedList<Empleado>* sorted = new LinkedList<Empleado>();
   sorted->addNodeSorted(Empleado("Jose",457,"aseador"));
    sorted->addNodeSorted(Empleado("Maria",556,"aseador"));
    sorted->addNodeSorted(Empleado("Antonio",455,"aseador"));
    sorted->addNodeSorted(Empleado("Carlos",201,"aseador"));

    //cout<<sorted->deleteNode(sorted->findNode("Jose"))<<endl;
    cout<<"Eliminado"<<endl;

    cout<<"----------Ordenada----------"<<endl;
    for (Empleado empleado : sorted->getLinkedList()) {
        cout<<empleado<< endl;
    }
    cout<<endl;
    return 0;
}
