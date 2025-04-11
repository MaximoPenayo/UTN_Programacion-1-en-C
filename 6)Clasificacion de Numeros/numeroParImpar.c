	#include <stdio.h>

// Penayo Maximo Joel

	int main(){
		
		int numero;
		
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		
		if (numero > 0){
			if(numero % 2 == 0){
				printf("------------------------------\n");
				printf("El numero es Par Positivo!\n");
				printf("------------------------------\n");
			}else{
				printf("------------------------------\n");
				printf("El numero es Impar Positivo!\n");
				printf("------------------------------\n");
			}
			
		}else{
			if(numero < 0){
				printf("------------------------------\n");
				printf("El numero es Negativo\n");
				printf("------------------------------\n");
			}else{
				printf("------------------------------\n");
				printf("El numero es Cero\n");
				printf("------------------------------\n");
			}
		}
		
		return 0;
	}
