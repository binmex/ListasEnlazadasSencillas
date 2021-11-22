//
// Created by Binmex on 16/11/2021.
//

#include "Empleado.h"

Empleado::Empleado(const std::string &name, int id, const std::string &puesto) : name(name), id(id), puesto(puesto) {}

const std::string &Empleado::getName() const {
    return name;
}

void Empleado::setName(const std::string &name) {
    Empleado::name = name;
}

int Empleado::getId() const {
    return id;
}

void Empleado::setId(int id) {
    Empleado::id = id;
}

const std::string &Empleado::getPuesto() const {
    return puesto;
}

void Empleado::setPuesto(const std::string &puesto) {
    Empleado::puesto = puesto;
}

Empleado::~Empleado() {

}

std::ostream &operator<<(std::ostream &os, const Empleado &empleado) {
    os << "name: " << empleado.name << " id: " << empleado.id << " puesto: " << empleado.puesto;
    return os;
}
