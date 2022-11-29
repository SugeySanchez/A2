#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float DSGS_x,DSGS_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int DSGS_i=0, DSGS_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de DSGS_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>DSGS_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de DSGS_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>DSGS_x;
        DSGS_i=DSGS_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        DSGS_s=DSGS_s+DSGS_x;
    }while(DSGS_i<DSGS_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<DSGS_s<<endl;
    return 0;

}