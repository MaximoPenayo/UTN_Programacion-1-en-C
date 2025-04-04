#include <stdio.h>
/*El usuario elige la conversión:
Dólares a Euros
Dólares a Pesos
Euros a Dólares
*/
int main() {
	
	int conversion;
	float dolar,euro,pesos;

	printf("-------------------------------------\n");
	printf("|\tCONVERSION DE MONEDAS\t\n");
	printf("| 1- Dolares a Euros\n");
	printf("| 2- Dolares a Pesos\n");
	printf("| 3- Euros a Dolares\n");
	printf("-------------------------------------\n");
	printf("Seleccione la conversion que desea: ");
	scanf("%d",&conversion);
	
	switch(conversion){
	case 1:
		printf("-------------------------------------\n");
		printf("\tDOLARES A  EUROS\t\n");
		printf("Cuantos Dolares desea cambiar: ");
		scanf("%f",&dolar);
		if(dolar > 0){
		euro = dolar * 0.9;
		printf("Ahora tienes %.2f Euros\n",euro);
		printf("-------------------------------------\n");
		}else{
			printf("-------------------------------------\n");
			printf("\tIngrese un monto Valido!\n");
			printf("-------------------------------------\n");
		}
		break;
	case 2:
		printf("-------------------------------------\n");
		printf("\tDOLARES A  PESOS\t\n");
		printf("Cuantos Dolares desea cambiar: ");
		scanf("%f",&dolar);
		if(dolar > 0){
		pesos = dolar * 1300;
		printf("Ahora tienes %.2f Pesos\n",pesos);
		printf("-------------------------------------\n");
		}else{
			printf("-------------------------------------\n");
			printf("\tIngrese un monto Valido!\n");
			printf("-------------------------------------\n");
		}
		break;
	case 3:
		printf("-------------------------------------\n");
		printf("\tEUROS A DOLARES\t\n");
		printf("Cuantos Euros desea cambiar: ");
		scanf("%f",&euro);
		if(euro > 0){
		dolar = euro * 1.1;
		printf("Ahora tienes %.2f Dolares\n",dolar);
		printf("-------------------------------------\n");
		}else{
			printf("-------------------------------------\n");
			printf("\tIngrese un monto Valido!\n");
			printf("-------------------------------------\n");
		}
		break;
	default:
		printf("-------------------------------------\n");
		printf("Has seleccionado una opcion Invalida\n");
		printf("\tFinalizando Programa...\n");
		printf("-------------------------------------\n");
	}
	return 0;
}

