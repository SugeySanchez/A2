#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float DSGS_x,DSGS_s=0,DSGS_s1=0,DSGS_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int DSGS_i=0,DSGS_l,DSGS_i1=0,DSGS_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>DSGS_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>DSGS_x; // determinamos al usuario que ingrese la variable de x
	DSGS_i=DSGS_i+1; // hacemos los respectivos cálculos
	DSGS_s=DSGS_s+DSGS_x;
	if(DSGS_x==1){ // Condicional dependiente del cálculo anterior
		DSGS_i1=DSGS_i1+1;
		DSGS_s1=DSGS_s1+DSGS_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		DSGS_i5=DSGS_i5+1;
		DSGS_s5=DSGS_s5+DSGS_x;
	}

	}while(DSGS_i<DSGS_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<DSGS_i<<endl;
	cout<<"El valor es: "<<DSGS_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<DSGS_i1<<endl;
	cout<<"El valor es: "<<DSGS_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<DSGS_i5<<endl;
	cout<<"La cantidad de moneda es: "<<DSGS_s5<<endl;
	return 0;
}