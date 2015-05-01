/*
* Trabajo Práctico N°2 "Numero par".
*
* Ferreyra, Maximiliano Gastón.
*
* Fecha: 20150418
*
* Primera version solo con main().
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    int puntaje = 0; // Variable para guardar los puntos acumulados durante el juego.

    int opcion = 0; // Variable para guardar temporalmente la opcion seleccionada.

    int respInt = 0; // Variable para guardar respuestas de tipo INT.

    string respStr; // Variable para guardar respuestas de tipo STRING.

    string mensaje = ""; // Variable para guardar mensajes para el usuario, sobre el estado de su respuesta.

    do{ // Comienza la ejecucion del juego.

        do{ // Muestro el menú principal.
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "            |    Bienvenido al Juego de Preguntas y Respuestas.    |" << endl;
            cout << "             ====================================================== " << endl;
            cout << endl;
            cout << "  Su puntaje hasta el momento: " << puntaje << "                 Respuestas correctas: 0 / 24" << endl;
            cout << endl;
            cout << "             ------------------------------------------------------ " << endl;
            cout << "             ----- Seleccione la categoria a la que responder ----- " << endl;
            cout << "             ------------------------------------------------------ " << endl;
            cout << endl;
            cout << endl;

            if(mensaje != "")
                cout << mensaje << puntaje << endl;

            cout << endl;
            cout << endl;
            cout << " ° Matematica [Opc. 1]" << endl;
            cout << endl;
            cout << " ° Lengua [Opc. 2]" << endl;
            cout << endl;
            cout << " ° Cs. Naturales [Opc. 3]" << endl;
            cout << endl;
            cout << " ° Interes General [Opc. 4]" << endl;
            cout << endl;
            cout << " ° Para salir [Opc. 99]" << endl;
            cout << endl;


            cout << " => Escriba la opcion seleccionada: ";
            cin >> opcion;
            cout << endl;
            cout << endl;

        }while(opcion != 99 && (opcion < 1 || opcion > 4));

        switch(opcion){ // Verifico si alguna opción corresponde con alguna categoria existente.
            case 1:
                cout << "Categoria Selesccionada: Matematica." << endl;
                cout << endl;
                cout << "Pregunta: Cuanto es el resto entero de dividir 25 entre 4?: ";
                cin >> respInt;
                if(respInt == 1){
                    mensaje = "Respuesta Correcta! Tu puntaje ahora es: ";
                    ++puntaje;
                }else{
                    mensaje = "Respuesta Incorrecta! No has ganado puntos. Tu puntaje: ";
                }
            break;

            case 2:
                cout << "Categoria Selesccionada: Lengua." << endl;
                cout << endl;
                cout << "Pregunta: Cual es el Sujeto de la siguiente oracion? \"El perro se encuentra acostado debajo de la mesa\": ";
                cin >> respStr;
                if(respStr == "perro"){
                    mensaje = "Respuesta Correcta! Tu puntaje ahora es: ";
                    ++puntaje;
                }else{
                    mensaje = "Respuesta Incorrecta! No has ganado puntos. Tu puntaje: ";
                }
            break;

            case 3:
                cout << "Categoria Selesccionada: Cs. Naturales." << endl;
                cout << endl;
                cout << "Pregunta: En que estado esta el agua a temperatura ambiente?: ";
                cin >> respStr;
                if(respStr == "liquido"){
                    mensaje = "Respuesta Correcta! Tu puntaje ahora es: ";
                    ++puntaje;
                }else{
                    mensaje = "Respuesta Incorrecta! No has ganado puntos. Tu puntaje: ";
                }
            break;

            case 4:
                cout << "Categoria Selesccionada: Interes General." << endl;
                cout << endl;
                cout << "Pregunta: Cual es la cantidad de provincias en Argentina?: ";
                cin >> respInt;
                if(respInt == 26){
                    mensaje = "Respuesta Correcta! Tu puntaje ahora es: ";
                    ++puntaje;
                }else{
                    mensaje = "Respuesta Incorrecta! No has ganado puntos. Tu puntaje: ";
                }
            break;
        }


    }while(opcion != 99); // Verifico que si la opcion seleccionada fue terminar el juego.

    cout << "Su puntaje final es de: " << puntaje << " Puntos" << endl;

    return 0; // Termino la ejecucion del juego.
}
