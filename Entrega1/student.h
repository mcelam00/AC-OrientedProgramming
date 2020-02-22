#ifndef STUDENT_H
#define STUDENT_H

#include "person.h" //incluye su clase padre


class Student : public Person //es necesario indicar que public Person es de donde hereda
{
private:
    vector<float> listaNotas; //como hereda de person y ya tiene el include vector lo hereda tambien
                              //maximo tendra tamaño 2 que es el maximo de notas de un alumno
public:
    Student();
    ~Student();

    /* GETTERS Y SETTERS*/

    float getNota(int numeroDeNotaEnLista);
    void setNota(float nota); //en la ultima posicion del vector
    vector<float> getlistaNotas();//con un for y el primero puedo prescindir de este ¿?
    int getNumeroTotalDeNotas();

    /* OTRAS FUNCIONES */

    float obtenerNota(int posicion); //es el getter ¿?


};

#endif // STUDENT_H
