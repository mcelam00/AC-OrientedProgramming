#include <QCoreApplication>

#include <person.h>
#include <student.h>
#include <teacher.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;



//
//Funcion principal del programa, que crea los objetos, pide los datos...
//

void Calificando()
{

        /* APARTADO CREACIÓN DE OBJETOS Y CÁLCULOS */








        /* APARTADO DE IMPRESION */








        /* APARTADO DE PETICION */

        string DNIIntroducido;
        bool entradaCorrecta = true;

        do{
            cin >> DNIIntroducido;

            //si recorremos el array de objetos y no se encuentra:
            entradaCorrecta = false;

            //si por el contrario si lo encuentra y es de profesor:
                //con el objeto extraido, llamo al metodo imprimirMediayLista de la clase teacher y al ImprimirAlumnoMejorNota

            //si es de alumno
                //se imprimen los datos del alumno llamando al metodo imprimirdatos que va a estar en la clase padre



        }while(entradaCorrecta == true);


}


int main()
{
    Calificando();
    return 0;
}
