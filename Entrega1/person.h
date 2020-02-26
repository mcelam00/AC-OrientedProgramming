#ifndef PERSON_H //preprocesa person h siempre que esté definida
#define PERSON_H


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{

private:    //Atributos
   string nombre;
   string apellidos;
   string DNI;

public:
    Person(); //Constructor por defecto
    Person(string nombre, string apellidos, string DNI); //Constructor sobrecargado
    ~Person(); //cleaner

    /* GETTERS */

    string getNombre();
    string getApellidos();
    string getDNI();

    /* OTRAS FUNCIONES */

    void ImprimirDatosPersonales();

};

#endif // PERSON_H
