#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float DSGS_x,DSGS_pm=0;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int DSGS_i=0,DSGS_l;  // determinamos las variables que vamos a utilizar en este caso números enteros 
	cout<<"Ingrese l: ";cin>>DSGS_l; // determinamos al usuario que inicialice la variable 
	do{ // inicio del ciclo do.
	
	cout<<"Ingrese x: ";cin>>DSGS_x; // determinamos al usuario que inicialice la variable 
	DSGS_i=DSGS_i+1; // realizamos los respectivos cálculos con los valores ingresados
	if(DSGS_x>DSGS_pm){ // Condicional, si se cumple se realizará un cálculo adicional.
		DSGS_pm=DSGS_x;
	}
	
	}while(DSGS_i<DSGS_l); // Condición para que se cumpla la repetición del ciclo do.
	// Una vez realizados los cálculos y procesos correspondientes, lanzamos el resultado al usuario.
	cout<<"El promedio maximo del curso es: "<<DSGS_pm<<endl;
	return 0;
}