#include "student.h"

Student::Student()
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

vector<float> Student::getListaNotas()
{
    return this->listaNotas;
}

int Student::getNumeroTotalDeNotas()
{
    return this->listaNotas.size();
}
