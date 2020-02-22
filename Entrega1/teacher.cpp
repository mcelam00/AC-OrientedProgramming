#include "teacher.h"

Teacher::Teacher()
{

}

Teacher::~Teacher()
{

}

void Teacher::setNuevoAlumnoEnLista(Student alumno)
{
    this->listaAlumnos.push_back(alumno);
}

void Teacher::AsignarNota(Student alumno, float nota1)
{
    alumno.setNota(nota1);
}

void Teacher::AsignarNota(Student alumno, float nota1, float nota2)
{
    alumno.setNota(nota1);
    alumno.setNota(nota2);
}

void Teacher::AsignarNota(Student alumno, float nota1, float nota2, float nota3)
{
    alumno.setNota(nota1);
    alumno.setNota(nota2);
    alumno.setNota(nota3);
}

float Teacher::ObtenerNotaMedia()
{

}

void Teacher::ImprimirListaYMedia()
{

}

void Teacher::ImprimirAlumnoMejorNota()
{

}
