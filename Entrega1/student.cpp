#include "student.h"

Student::Student(string nombre, string apellidos, string DNI):Person(nombre, apellidos, DNI)
{

}

Student::~Student()
{

}

float Student::getNota(int numeroDeNotaEnLista)
{
    return this->listaNotas[numeroDeNotaEnLista];
}

void Student::setNota(float nota)
{
   this->listaNotas.push_back(nota);
}

int Student::getNumeroTotalDeNotas()
{
    return this->listaNotas.size();
}

float Student::getNotaMedia()
{
    return this->media;
}


void Student::CalcularMedia()
{
    //coge la lista de notas del alumno
    float sumaTotalNotas = 0;
    cout<<"Hola" <<endl;
    int tamanioListaNotas = this->listaNotas.size();//saco el tamanio de la lista

    //recorro la lista de notas del alumno que se me pasa como parametro
    for(int i = 0; i < tamanioListaNotas; i++)
    {

        sumaTotalNotas = sumaTotalNotas + this->listaNotas[i]; //saco cada nota y la sumo al total acumulado

    }

    cout << "la suma es" <<  sumaTotalNotas<<endl;
    float mediaLocal;

    mediaLocal = (sumaTotalNotas/tamanioListaNotas);

       cout << "la media es" << mediaLocal <<endl;

    this->media = mediaLocal; //seteo en el atributo la media


}
