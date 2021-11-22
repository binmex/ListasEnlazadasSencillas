//
// Created by Binmex on 16/11/2021.
//

#ifndef LISTASENLAZADASSENCILLAS_EMPLEADO_H
#define LISTASENLAZADASSENCILLAS_EMPLEADO_H

#include <ostream>
#include "string"

class Empleado {
public:
    Empleado(const std::string &name, int id, const std::string &puesto);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getId() const;

    void setId(int id);

    const std::string &getPuesto() const;

    void setPuesto(const std::string &puesto);

    friend std::ostream &operator<<(std::ostream &os, const Empleado &empleado);

    virtual ~Empleado();

private:
    std::string name;
    int id;
    std::string puesto;
};


#endif //LISTASENLAZADASSENCILLAS_EMPLEADO_H
