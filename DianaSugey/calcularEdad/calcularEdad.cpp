#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int DSGS_aa, DSGS_ma, DSGS_da, DSGS_an, DSGS_mn, DSGS_dn, DSGS_a, DSGS_m, DSGS_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> DSGS_aa >> DSGS_ma >> DSGS_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> DSGS_an >> DSGS_mn >> DSGS_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (DSGS_da > DSGS_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        DSGS_d = DSGS_da - DSGS_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        DSGS_da = DSGS_da + 30;
        DSGS_ma = DSGS_ma - 1;
        DSGS_d = DSGS_da - DSGS_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (DSGS_ma > DSGS_mn)
    {

        DSGS_m = DSGS_ma - DSGS_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        DSGS_ma = DSGS_ma + 12;
        DSGS_aa = DSGS_aa - 1;
        DSGS_m = DSGS_ma - DSGS_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    DSGS_a = DSGS_aa - DSGS_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << DSGS_a << " años, " << DSGS_m << " meses," << DSGS_d << " dias" << endl;
    return 0;
}