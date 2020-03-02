#include "student.h"

Student::Student(string nombre, string apellidos, string DNI):Person(nombre, apellidos, DNI)
{

}

Student::~Student()
{


}

float Student::getNotaMedia()
{
    return this->media;

}

void Student::setNota(float nota)
{
   this->listaNotas.push_back(nota);
}

int Student::getNumeroTotalDeNotas()
{
    return this->listaNotas.size();
}

void Student::CalcularMedia()
{
    //coge la lista de notas del alumno
    float sumaTotalNotas = 0;
    int tamanioListaNotas = this->listaNotas.size();//saco el tamanio de la lista

    //recorro la lista de notas del alumno que se me pasa como parametro
    for(int i = 0; i < tamanioListaNotas; i++)
    {

        sumaTotalNotas = sumaTotalNotas + this->listaNotas[i]; //saco cada nota y la sumo al total acumulado

    }


    this->media = (sumaTotalNotas/tamanioListaNotas); //seteo en el atributo la media


}

void Student::ImprimirTodasNotas()
{
    cout << "NOTAS : ";

    for(int i = 0; i < (int)this->listaNotas.size();i++) //recorro lista notas de cada alumno
    {
        cout << this->listaNotas[i] << "  ";
    }

    cout << endl;


}

void Student::ImprimirNotaMedia()
{
    cout << endl;

    cout << "NOTA MEDIA : " << this->media << endl;

    cout << endl;



}
