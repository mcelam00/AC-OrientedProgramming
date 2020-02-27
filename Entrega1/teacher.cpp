#include "teacher.h"
                                                              //llamo al constructor de arriba con los parametros que se le pasan a este
Teacher::Teacher(string nombre, string apellidos, string DNI):Person(nombre, apellidos, DNI) //estoy creando un objeto persona llamando al constructor de la superclase que es Persona por eso lo de los :
{
//aqui irian las modificaciones, lo que tengo que cambiar, de la clase actual, no de person
}

Teacher::~Teacher()
{
   listaAlumnos.clear();
}

void Teacher::setNuevoAlumnoEnLista(Student *alumno)
{
    this->listaAlumnos.push_back(alumno);
}

vector<Student *> Teacher::getListaAlumnos()
{
    return this->listaAlumnos;

}

void Teacher::AsignarNota(Student *alumno, float nota1)
{
    alumno->setNota(nota1);
}

void Teacher::AsignarNota(Student *alumno, float nota1, float nota2)
{
    alumno->setNota(nota1);
    alumno->setNota(nota2);
}

void Teacher::AsignarNota(Student *alumno, float nota1, float nota2, float nota3)
{
    alumno->setNota(nota1);
    alumno->setNota(nota2);
    alumno->setNota(nota3);
}

void Teacher::ObtenerNotaMedia(Student *alumno)
{
    alumno->CalcularMedia(); //si hace falta repetir el parametro o puede usarse this
}

void Teacher::ImprimirListaYMedia()
{
    //Imprimo los datos del profesor

    cout << "<<<<<<<<<<<<<<<< PROFESOR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;

    this->ImprimirDatosPersonales();
    cout << endl;


    //imprimo a todos sus alumnos
    cout << "<<<<<<<<<<<<<<<< LISTADO DE ALUMNOS >>>>>>>>>>>>>>>>>>>>>>" << endl;

    //recorro los alumnos del profesor
    for(int i = 0; i < (int)this->listaAlumnos.size(); i++)
    {
        listaAlumnos[i]->ImprimirDatosPersonales(); //de cada alumno pinto sus datos tambien
        listaAlumnos[i]->ImprimirTodasNotas(); //De c/u de la lista pinto sus notas
        listaAlumnos[i]->ImprimirNotaMedia(); //De c/u del vector del profesor pinto la media

    }



}

void Teacher::ImprimirAlumnoMejorNota()
{
  //buscamos el alumno con mejor nota entre los alumnos con 3 notas

    float notaMediaMasAlta = 0.00;
    string nombreAlumno;

    for(int i = 0; i < (int)this->listaAlumnos.size(); i++)
    {

        if(this->listaAlumnos[i]->getNumeroTotalDeNotas() == 3) //de entre los alumnos con 3 notas
        {

                if(this->listaAlumnos[i]->getNotaMedia() > notaMediaMasAlta)
                {
                     notaMediaMasAlta = this->listaAlumnos[i]->getNotaMedia();
                     nombreAlumno = this->listaAlumnos[i]->getNombre();

                }

        }
    }

    cout << "EL ALUMNO DE " << this->getNombre() << " CON LA MEJOR NOTA ES : " << nombreAlumno << " CON MEDIA = " << notaMediaMasAlta << endl;

     cout << "---------------------------------------------------------------------------------" << endl;
}

