#include "teacher.h"
                                                              //llamo al constructor de arriba con los parametros que se le pasan a este
Teacher::Teacher(string nombre, string apellidos, string DNI):Person(nombre, apellidos, DNI) //estoy creando un objeto persona llamando al constructor de la superclase que es Persona por eso lo de los :
{
//aqui irian las modificaciones, lo que tengo que cambiar, de la clase actual, no de person
}

Teacher::~Teacher()
{
    //no hay ningun atributo (p.ej tipo puntero que deba ser destruido)
}

void Teacher::setNuevoAlumnoEnLista(Student *alumno)
{
    this->listaAlumnos.push_back(alumno);
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

float Teacher::ObtenerNotaMedia(Student *alumno)
{
    alumno->CalcularMedia(); //si hace falta repetir el parametro o puede usarse this
    return alumno->getNotaMedia();
}

void Teacher::ImprimirListaYMedia()
{
/*    cout << "LISTADO DE ALUMNOS" << endl;

    //recorro los alumnos del profesor
    for(int i = 0; i < (int)this->listaAlumnos.size(); i++)
    {
        listaAlumnos[i].ImprimirDatosPersonales(); //Método de la clase padre que pinta los datos

        //pinto las notas
        cout << "Notas : ";
        for(int i = 0; i < (int)listaAlumnos[i].getListaNotas().size();i++) //recorro lista notas de cada alumno
        {
            cout << listaAlumnos[i].getNota(i) << "  ";
        }

        cout << endl;

        //pinto la media
       double media = this->ObtenerNotaMedia(listaAlumnos[i]);
       cout << "Media : " << media << endl;

    }
*/
}

void Teacher::ImprimirAlumnoMejorNota()
{
 /*   //buscamos el alumno con mejor nota entre los alumnos con 3 notas

    int notaMediaMasAlta = 0;
    string nombreAlumno;

    for(int i = 0; i < (int)this->listaAlumnos.size(); i++)
    {

        if(this->listaAlumnos[i].getListaNotas().size() == 3) //de entre los alumnos con 3 notas
        {
            int mediaAlumno = this->ObtenerNotaMedia(this->listaAlumnos[i]);
            //creo un puntero a la clase padre


                if(mediaAlumno > notaMediaMasAlta)
                {
                     notaMediaMasAlta = mediaAlumno;
                     nombreAlumno = this->listaAlumnos[i].getNombre(); //DUDA ACCEDER AL NOMBRE SE PUEDE HACER¿? AL SER DE LA CLASE PADRE¿

                }

        }
    }

    cout << "El Alumno con mejor nota es: " << nombreAlumno << " con nota media = " << notaMediaMasAlta << endl;

*/
}

