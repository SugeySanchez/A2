#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float DSGS_imc,DSGS_peso,DSGS_altura; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	cout<<"Ingrese el peso (kg): ";cin>>DSGS_peso; // determinamos al usuario que inicialice la variable de peso.
	cout<<"Ingrese la altura (metros): ";cin>>DSGS_altura; // determinamos al usuario que inicialice la variable de altura.
	DSGS_imc=DSGS_peso/(DSGS_altura*DSGS_altura); // Realizamos el respectivo cálculo para obtener IMC.
	// a continuacion, depende del resultado que obtengamos en el IMC
	// repartimos diferentes resultados según las siguientes condiciones	
	if(DSGS_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(DSGS_imc>=18.5 && DSGS_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(DSGS_imc>=25 && DSGS_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(DSGS_imc>=27 && DSGS_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(DSGS_imc>=30 && DSGS_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(DSGS_imc>=35 && DSGS_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(DSGS_imc>=40 && DSGS_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(DSGS_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}