#ifndef PERSON_H //preprocesa person h siempre que esté definida
#define PERSON_H


#include <iostream>//para poder usar strings, sino no existen y serian char*
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



};

#endif // PERSON_H
