#ifndef STUDENT_H
#define STUDENT_H

#include "person.h" //incluye su clase padre


class Student : public Person //es necesario indicar que public Person es de donde hereda
{
private:
    vector<float> listaNotas; //como hereda de person y ya tiene el include vector lo hereda tambien
    float notaMedia;

public:
    Student();
    ~Student();


};

#endif // STUDENT_H
