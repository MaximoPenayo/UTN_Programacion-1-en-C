#include <stdio.h>

int main(){
	
	int suma,resta,mult;
	
	int num1,num2;
	int acum;
	int i;
	int seguir;
	int selec;
	

	do{
		
			printf("------MENU------\n");
		printf("1 - SUMA\n");
		printf("2 - RESTA\n");
		printf("3 - TABLA DE MULTIPLICAR\n");
		printf("0 - SALIR\n");
		printf("-------------------\n");
		
		printf("Ingrese una opcion: ");
		scanf("%d",&selec);
	
	
	switch(selec){
		case 1:
			printf("Has Seleccionado la Suma!\n");
			printf("Ingresa un numero para sumar: ");
			scanf("%d",&num1);
			printf("Ingresa otro numero para sumar: ");
			scanf("%d",&num2);
		
			printf("El resultado de la suma es: %d\n",num1+num2);
			break;
			
			case 2:
			printf("Has Seleccionado la Resta!\n");
			printf("Ingresa un numero para restar: ");
			scanf("%d",&num1);
			printf("Ingresa otro numero para restar: ");
			scanf("%d",&num2);
			
		
			printf("El resultado de la resta es: %d\n",num1-num2);
			break;
			case 3:
				printf("Ingrese un numero para multiplicar: ");
				scanf("%d",&num1);
				printf("Ingrese un limite: ");
				scanf("%d",&num2);
				
				for (i= 1;i<=num2;i++){
					mult = i * num1;
					printf("%d\n",mult);
				}
				break;
				
				case 0: 
					printf("Programa finalizado...");
					return 0;
				break;
				
				default:
					printf("Ingrese una opcion Valida!\nIntente Nuevamente");
					return 0;
			}
			
			printf("Desea Seguir? 1-Si 0-No");
			scanf("%d",&seguir);
			

		}while(seguir!=0);
			
	
	
	return 0;
}
