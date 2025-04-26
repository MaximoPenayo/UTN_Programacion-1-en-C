#include <stdio.h>
#include <stdbool.h>


/*	Escribe un programa en C que permita registrar las edades de varias personas
	y luego muestre el promedio de edad, la edad más pequeña y la más alta.
	
	El programa debe solicitar al usuario que ingrese edades una por una.
	Si la edad ingresada es menor a 0, se debe mostrar un mensaje de error y pedir nuevamente una edad válida.
	Si el usuario ingresa 0, el programa debe finalizar y mostrar:
	El promedio de las edades ingresadas.
	La edad más pequeña.
	La edad más alta.*/
	
int main() {
	
	int edades,mayor,menor;
	float promedio;
	int suma = 0;
	int contador = 0;
	bool seguir;
	
	mayor= -100000;
	menor= 100000;
	edades=1;
	seguir= true;
	
	while(seguir){
		printf("Ingrese su edad: ");
		scanf("%d",&edades);
		
		if(edades<0){
			printf("¡Por favor seleccione una edad valida!\n");
			/*printf("Ingrese su edad: ");
			scanf("%d",&edades);*/
		}else if(edades==0){
			seguir = false;
			printf("Programa Finalizado...\n");
		}else{
			suma= suma + edades;
			contador = contador + 1;
			
			if(edades < menor){
				menor = edades;
			}
			
			if(edades > mayor){
				mayor =  edades;
			}
		}
		
	}
	
	if(contador > 0){
		promedio  = (float)suma / contador;
		printf("----------------------------------------------\n");
		printf("\t\tRESULTADOS\n");
		printf("----------------------------------------------\n");
		printf("Promedio de edades: %.2f \n",promedio);
		printf("La edad mas chica: %d \n",menor);
		printf("La edad mas grande: %d \n",mayor);
		printf("----------------------------------------------\n");
	}
	
	
	
	return 0;
}

