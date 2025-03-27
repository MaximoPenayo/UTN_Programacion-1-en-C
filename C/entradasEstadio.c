#include <stdio.h>

int main(){
	
	int cantEntradas,total;
	char sector;
	
	
	int solGen= 3;
	int solPref= 5;
	int sombra= 8;
	int trib= 15;
	int plat= 20;
	
	cantEntradas=0;
	total=0;
	printf("*************************************************\n");
	
	printf("\tBIENVENIDO AL ESTADIO CUSCATLAN\t\t\n");
	
	printf("*************************************************\n");
	
	printf("* Sectores del Estadio\t\t\t\t*\n");
	printf("*    A- Sol General-----$3\t\t\t*\n");
	printf("*    B- Sol Preferente--$5\t\t\t*\n");
	printf("*    C- Sombra----------$8\t\t\t*\n");
	printf("*    D- Tribuna---------$15\t\t\t*\n");
	printf("*    E- Platea----------$20\t\t\t*\n");
	
	printf("*************************************************\n");
	
	printf("Seleccionar la letra del sector del estadio: ");
	scanf(" %c",&sector);
	
	switch(sector){
	case 'a':
	case 'A': printf("Has Seleccionado Sol General\n");
	printf("Seleccione cantidad de entradas: ");
	if (scanf("%d", &cantEntradas) != 1 || cantEntradas < 1) {
		printf("¡Ingrese un numero mayor a 0!.\n");
		return 1;
	}
	total= cantEntradas * solGen;
	break;
	case 'b':
	case 'B': printf("Has Seleccionado Sol Preferente\n");
	printf("Seleccione cantidad de entradas: ");
	if (scanf("%d", &cantEntradas) != 1 || cantEntradas < 1) {
		printf("¡Ingrese un numero mayor a 0!.\n");
		return 1;
	}
	total= cantEntradas * solPref;
	break;
	case 'c':
	case 'C': printf("Has Seleccionado Sombra\n");
	printf("Seleccione cantidad de entradas: ");
	if (scanf("%d", &cantEntradas) != 1 || cantEntradas < 1) {
		printf("¡Ingrese un numero mayor a 0!.\n");
		return 1;
	}
	total= cantEntradas * sombra;
	break;
	case 'd':
	case 'D': printf("Has Seleccionado Tribuna\n");
	printf("Seleccione cantidad de entradas: ");
	if (scanf("%d", &cantEntradas) != 1 || cantEntradas < 1) {
		printf("¡Ingrese un numero mayor a 0!.\n");
		return 1;
	}
	total= cantEntradas * trib;
	break;
	case 'e':
	case 'E': printf("Has Seleccionado Platea\n");
	printf("Seleccione cantidad de entradas: ");
	if (scanf("%d", &cantEntradas) != 1 || cantEntradas < 1) {
		printf("¡Ingrese un numero mayor a 0!.\n");
		return 1;
	}
	total= cantEntradas * plat;
	break;
	
	default:
		printf("¡Sector desconocido!");
	}
	
	printf("*************************************************\n");
	printf("*\t   El Total a pagar es de $%d\t\t*\n",total);
	printf("*************************************************\n");
	return 0;
	
}
