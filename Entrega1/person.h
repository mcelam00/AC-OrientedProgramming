#ifndef PERSON_H //preprocesa person h siempre que esté definida
#define PERSON_H


#include <iostream>//para poder usar strings, sino no existen y serian char*
#include <string>
#include <vector>

using namespace std;

class Person
{

private:    //Atributos
   string name;
   string surname;
   string DNI;

public:
    Person(); //Constructor por defecto
    Person(string name, string surname, string DNI); //Constructor sobrecargado
    ~Person(); //cleaner














};

#endif // PERSON_H
