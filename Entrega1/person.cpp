#include "person.h"

Person::Person()
{

}

Person::Person(string nombre, string apellidos, string DNI)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->DNI = DNI;
}

Person::~Person()
{

}

string Person::getNombre()
{
    return this->nombre;
}

string Person::getApellidos()
{
    return this->apellidos;
}

string Person::getDNI()
{
  return this->DNI;
}
