#include <QCoreApplication>

#include <person.h>
#include <student.h>
#include <teacher.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;



/* Funcion principal del programa, que crea los objetos, pide los datos...*/

void Calificando()
{
        /* VECTOR POR SI TUVIERA MAS DE UN PROFESOR LA APLICACION */

        vector<Teacher *> profesores;


        /* APARTADO CREACIÓN DE OBJETOS Y CÁLCULOS */

            //Como el espacio en la pila es pequeño, si creo un objeto sin reservar memoria dinamicamente, el objeto se crea en el stack (que no tiene unas dimensiones muy grandes), si utilizo el new sin embargo, el objeto lo creo en el Heap que tiene muchisimo mas espacio que la pila y solamente retengo en la pila el puntero al objeto de manera que es mas eficiente por ejemplo de cara a llamadas recursivas en las que si lo hacemos sin new, stackOverflow, ademas, al usar polimorfismo debemos usar new
            //ademas como no sé el numero de estudiantes que voy a tener, no puedo crear tropecientos sin new porque lleno la pila

        Student *pepito = new Student("pepito","Perez","33997755F");
        Student *jaimito = new Student("jaimito","Perez","12997755F");
        Student *jorge = new Student("jorge","Perez","10997755F");
        Student *luis = new Student("luis","Perez","30997755F");



            //como solo creo un profesor (en el enunciado se especifica "del profesor") entonces lo hago sin new y me ahorro las reservas de memoria y aprovecho los recursos del compilador para optimizar el objeto al ser éste estático
        Teacher juanjo("Juanjo", "Campos", "12346600L");
        profesores.push_back(&juanjo);

            //se añaden los alumnos al profesor
        juanjo.setNuevoAlumnoEnLista(pepito);
        juanjo.setNuevoAlumnoEnLista(jaimito);
        juanjo.setNuevoAlumnoEnLista(jorge);
        juanjo.setNuevoAlumnoEnLista(luis);

            //se les asignan a los alumnos sus notas
        juanjo.AsignarNota(pepito, 8.7);
        juanjo.AsignarNota(jaimito, 8.7, 9.1);
        juanjo.AsignarNota(jorge, 4.0, 3.2, 7.9);
        juanjo.AsignarNota(luis, 10, 10, 10);

            //se obtienen las medias de los alumnos
        juanjo.ObtenerNotaMedia(pepito);
        juanjo.ObtenerNotaMedia(jaimito);
        juanjo.ObtenerNotaMedia(jorge);
        juanjo.ObtenerNotaMedia(luis);


        /* APARTADO DE IMPRESION */

        juanjo.ImprimirListaYMedia();
        juanjo.ImprimirAlumnoMejorNota();



        /* APARTADO DE PETICION DE DNI */

       string DNIIntroducido;
        bool entradaCorrecta = false;

        do{
            cout << "Por favor, introduzca un DNI de Usuario : ";
            cin >> DNIIntroducido;

            //primero miro si es un profesor y luego dentro de sus alumnos si no es
            for(int i = 0; i < (int)profesores.size(); i++)
            {
                if(profesores[i]->getDNI() == DNIIntroducido){ //lo hemos encontrado y es profesor

                    entradaCorrecta = true;
                    profesores[i]->ImprimirListaYMedia();
                    profesores[i]->ImprimirAlumnoMejorNota();
                    break;

                }else { //sino miro dentro de los alumnos del profesorSubi

                    for(int j = 0; j < (int)profesores[i]->getListaAlumnos().size(); i++){

                        if(profesores[i]->getListaAlumnos()[j]->getDNI() == DNIIntroducido){ //resulta que es un alumno

                            entradaCorrecta = true;
                            profesores[i]->getListaAlumnos()[j]->ImprimirDatosPersonales();
                            profesores[i]->getListaAlumnos()[j]->ImprimirTodasNotas();
                            profesores[i]->getListaAlumnos()[j]->ImprimirNotaMedia();
                            break;

                        }
                        //no es un alumno de este profesorSubi

                    }
                    cout << "ERROR: El DNI digitado, no corresponde a ningun usuario de la aplicacion" << endl;


                }


            }

        }while(entradaCorrecta == false);





           /* APARTADO DE DESTRUCCION */

        delete pepito;
        delete jaimito;
        delete jorge;
        delete luis;



}


int main()
{
    Calificando();
    return 0;
}
