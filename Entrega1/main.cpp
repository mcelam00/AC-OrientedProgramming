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


       // Student pepito = new  Student("Pepito","Perez","71673499P");
        Student *pepito1 = new Student("Pepito1","Perez","33997755F");
        //Student pepito2("Pepito2","Gómez","33991155h");
        //Student pepito3("Pepito3","Ruíz","33057755l");
       // Student pepito4("Pepito4","Sal","88997755p");

        //Teacher *juanjo = new Teacher("Juanjo", "Campos", "12346600L");
        //juanjo->AsignarNota(pepito2, 9);
       //float valor = juanjo->ObtenerNotaMedia(pepito2);
       // cout << valor <<endl;

      /*  juanjo.setNuevoAlumnoEnLista(pepito1);
        juanjo.setNuevoAlumnoEnLista(pepito2);
        juanjo.setNuevoAlumnoEnLista(pepito3);
        juanjo.setNuevoAlumnoEnLista(pepito4);
        juanjo.ObtenerNotaMedia(pepito1);


        /* APARTADO DE IMPRESION */
/*
        juanjo.ImprimirListaYMedia();
        juanjo.ImprimirAlumnoMejorNota();






        /* APARTADO DE PETICION */
/*
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
                //sus notas obtenidas y su nota media


        }while(entradaCorrecta == true);

*/
}


int main()
{
    Calificando();
    return 0;
}
