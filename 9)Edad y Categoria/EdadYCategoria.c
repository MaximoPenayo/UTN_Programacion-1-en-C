#include <stdio.h>
//Penayo Maximo Joel

/*Solicita la edad de una persona y clasifica en:
Menor de edad (<18 años)
Adulto (18-64 años)
Adulto mayor (=65 años)
*/

int main() {
	int edad;
	
	printf("Ingrese su Edad: ");
	scanf("%d",&edad);
	
	if(edad<18){
		printf("Usted es un 'Menor de Edad'\n");
	}
	if(edad>=18 && edad <=64){
		printf("Usted es un 'Adulto'\n");
	}
	if(edad>=65){
		printf("Usted es un 'Adulto Mayor'\n");
	}
	return 0;
}

