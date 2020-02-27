#ifndef TEACHER_H
#define TEACHER_H

#include "person.h" //incluye su clase padre
#include "student.h" //se van a usar la clase student aquí (vector) entonces hay que indicarlo

class Teacher : public Person
{
private:
    vector<Student *> listaAlumnos;

public:
    Teacher(string nombre, string apellidos, string DNI);
    ~Teacher();

    /* GETTERS Y SETTERS */
    void setNuevoAlumnoEnLista(Student *alumno);
    vector<Student *> getListaAlumnos();

    /* OTRAS FUNCIONES */

    void AsignarNota(Student *alumno, float nota1);   //sobrecargado para asignar 1, 2 o 3 notas según corresponda
    void AsignarNota(Student *alumno, float nota1, float nota2);
    void AsignarNota(Student *alumno, float nota1, float nota2, float nota3);

    void ObtenerNotaMedia(Student *alumno);

    void ImprimirListaYMedia();
    void ImprimirAlumnoMejorNota();
};

#endif // TEACHER_H
