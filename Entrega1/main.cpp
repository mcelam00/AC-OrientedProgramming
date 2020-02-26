#include <QCoreApplication>

#include <person.h>
#include <student.h>
#include <teacher.h>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

static vector<Teacher> profesores; //puedo hacerlo aqui o en el mismo calificando en cuyo caso tendra visibilidad local

//
//Funcion principal del programa, que crea los objetos, pide los datos...
//

void Calificando()
{

        /* APARTADO CREACIÓN DE OBJETOS Y CÁLCULOS */

            //Como el espacio en la pila es pequeño, si creo un objeto sin reservar memoria dinamicamente, el objeto se crea en el stack (que no tiene unas dimensiones muy grandes), si utilizo el new sin embargo, el objeto lo creo en el Heap que tiene muchisimo mas espacio que la pila y solamente retengo en la pila el puntero al objeto de manera que es mas eficiente por ejemplo de cara a llamadas recursivas en las que si lo hacemos sin new, stackOverflow, ademas, al usar polimorfismo debemos usar new
            //ademas como no sé el numero de estudiantes que voy a tener, no puedo crear tropecientos sin new porque lleno la pila

        Student *pepito = new Student("pepito","Perez","33997755F");
        Student *jaimito = new Student("jaimito","Perez","12997755F");
        Student *jorge = new Student("jorge","Perez","10997755F");
        Student *luis = new Student("luis","Perez","30997755F");



            //como solo creo un profesor (en el enunciado se especifica "del profesor") entonces lo hago sin new y me ahorro las reservas de memoria y aprovecho los recursos del compilador para optimizar el objeto al ser éste estático
        Teacher juanjo("Juanjo", "Campos", "12346600L");


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



        /* APARTADO DE PETICION */

/*        string DNIIntroducido;
        bool entradaCorrecta = true;

        do{
            cin >> DNIIntroducido;

            //si recorremos el array de objetos y no se encuentra:
            entradaCorrecta = false;

            //si por el contrario si lo encuentra y es de profesor:
                //con el objeto extraido, llamo al metodo imprimirMediayLista de la clase teacher y al ImprimirAlumnoMejorNota

            //si es de alumno
                //se imprimen los datos del alumno llamando al metodo imprimirdatos que va a estar en la clase padre
                //sus notas obtenidas y su nota media


        }while(entradaCorrecta == true);

*/

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
