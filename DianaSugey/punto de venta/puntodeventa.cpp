#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float DSGS_x, DSGS_s = 0, DSGS_vb, DSGS_piva = 12, DSGS_viva, DSGS_pdesc = 10, DSGS_vdesc, DSGS_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int DSGS_i = 0, DSGS_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> DSGS_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> DSGS_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        DSGS_i = DSGS_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        DSGS_s = DSGS_s + DSGS_x;
    } while (DSGS_i < DSGS_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    DSGS_vb = DSGS_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    DSGS_viva = DSGS_vb * DSGS_piva / 100;
    DSGS_vdesc = DSGS_vb * DSGS_pdesc / 100;
    DSGS_vn = DSGS_vb + DSGS_viva - DSGS_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << DSGS_vn << endl;
    return 0;
}