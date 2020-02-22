#ifndef TEACHER_H
#define TEACHER_H

#include "person.h" //incluye su clase padre
#include "student.h" //se van a usar la clase student aquí (vector) entonces hay que indicarlo

class Teacher : public Person
{
private:
    vector<Student> listaAlumnos;

public:
    Teacher();
    ~Teacher();

    /* GETTERS Y SETTERS */
    void setNuevoAlumnoEnLista(Student alumno);

    /* OTRAS FUNCIONES */

    void AsignarNota(float nota1);   //sobrecargado para asignar 1, 2 o 3 notas según corresponda
    void AsignarNota(float nota1, float nota2);
    void AsignarNota(float nota1, float nota2, float nota3);

    float ObtenerNotaMedia();

    void ImprimirListaYMedia();
    void ImprimirAlumnoMejorNota();
};

#endif // TEACHER_H
