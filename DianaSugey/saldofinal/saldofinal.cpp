#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float DSGS_x,DSGS_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int DSGS_i=0,DSGS_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>DSGS_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>DSGS_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>DSGS_x; // determinamos al usuario que inicialice la variable 
	DSGS_i=DSGS_i+1; //  Realizamos las respectivas operaciones..
	DSGS_s=DSGS_s-DSGS_x;

	}while(DSGS_i<DSGS_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<DSGS_s<<endl;
	return 0;
}