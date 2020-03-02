#ifndef STUDENT_H
#define STUDENT_H

#include "person.h" //incluye su clase padre


class Student : public Person //es necesario indicar que public Person es de donde hereda
{

private:

    vector<float> listaNotas; //como hereda de person y ya tiene el include vector lo hereda tambien maximo tendra tamaño 2 que es el maximo de notas de un alumno
    float media;

public:

    Student(string nombre, string apellidos, string DNI); //se sobreescribe con el de la clase padre
    ~Student();

    /* GETTERS Y SETTERS*/

    void setNota(float nota); //en la ultima posicion del vector
    int getNumeroTotalDeNotas();
    float getNotaMedia();

    /* OTRAS FUNCIONES */

    void CalcularMedia();
    void ImprimirTodasNotas();
    void ImprimirNotaMedia();


};

#endif // STUDENT_H
