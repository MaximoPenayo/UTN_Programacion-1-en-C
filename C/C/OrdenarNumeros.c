#include <stdio.h>

/*Alumno: Penayo Maximo Joel
  DNI: 46459945
  Legajo: 30412*/


int main(){
	
	int num1,num2,num3;
	int aux;
	
	
	printf("Ingrese un numero: ");
	scanf("%d",&num1);
	printf("Ingrese otro numero: ");
	scanf("%d",&num2);
	printf("Ingrese otro numero: ");
	scanf("%d",&num3);
	
	if(num1 > num2){
		aux = num1;
		num1 = num2;
		num2 = aux;
	}if(num1 > num3){
		aux = num1;
		num1 = num3;
		num3 = aux;
	}if(num2 > num3){
		aux = num2;
		num2 = num3;
		num3 = aux;
	}
	
	printf("\n");
	printf("-------------------------------------------------------------------------------\n");
	printf("Los numeros ordenados de mayor a menos son: %d - %d - %d\n",num1,num2,num3);
	printf("-------------------------------------------------------------------------------\n");
	
	
	return 0;
}
