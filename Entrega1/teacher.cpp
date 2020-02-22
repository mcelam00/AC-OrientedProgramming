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

float Teacher::ObtenerNotaMedia(Student alumno)
{
    //se trae la lista de notas del alumno y se calcula su sumatorio
    float sumaTotalNotas = 0;
    int tamanioListaNotas = (int)alumno.getListaNotas().size(); //casteo a entero el size de la lista que se me devuelve de ese alumno

    //recorro la lista de notas del alumno que se me pasa como parametro
    for(int i = 0; i < tamanioListaNotas; i++){

        sumaTotalNotas = sumaTotalNotas + alumno.getNota(i); //saco cada nota y la sumo al total acumulado

    }

    //se trae el total de notas para saber si tiene 1, 2 o 3

    int numeroDeNotas = alumno.getNumeroTotalDeNotas();

    float media = 0;

    media = (sumaTotalNotas/numeroDeNotas);

    return media;
}

void Teacher::ImprimirListaYMedia()
{
    cout << "LISTADO DE ALUMNOS" << endl;

    //recorro los alumnos del profesor
    for(int i = 0; i < (int)this->listaAlumnos.size(); i++){
       cout << "Nombre :" << listaAlumnos[i];

        //DUDA sacar el nombre de un alumno y todos los demas datos!!!

    }

}

void Teacher::ImprimirAlumnoMejorNota()
{
    //buscamos el alumno con mejor nota entre los alumnos con 3 notas

    int notaMediaMasAlta = 0;
    string nombreAlumno;

    for(int i = 0; i < (int)this->listaAlumnos.size(); i++){

        int mediaAlumno = this->ObtenerNotaMedia(this->listaAlumnos[i]);

            if(mediaAlumno > notaMediaMasAlta){
                notaMediaMasAlta = mediaAlumno;
                nombreAlumno = this->listaAlumnos[i]. //DUDA ACCEDER AL NOMBRE
            }


    }

    cout << "El Alumno con mejor nota es: " << nombreAlumno << " con nota media = " << notaMediaMasAlta << endl;


}
