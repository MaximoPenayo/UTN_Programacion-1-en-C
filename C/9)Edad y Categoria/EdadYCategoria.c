#include <stdio.h>
/*Solicita la edad de una persona y clasifica en:
Menor de edad (<18 a�os)
Adulto (18-64 a�os)
Adulto mayor (=65 a�os)
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

