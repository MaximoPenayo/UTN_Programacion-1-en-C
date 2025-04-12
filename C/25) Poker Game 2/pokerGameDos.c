
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int carta, puntos;
	char opcion;
	
	puntos = 1;

	
	printf("-----------------------------------------------------------\n");
	printf("\tBienvenido al Juego de Poker Alta-Baja\n");
	printf("\tDebera adivinar si la carta es alta o Baja\n");
	printf("-----------------------------------------------------------\n");
	
	srand(time(NULL));
	
	while(1){
		carta = rand() % 13 + 1;
		printf("-----------------------------------------------------------\n");
		printf(" A - ALTA\n B - Baja\n");
		printf("Ingrese su seleccion: ");
		scanf(" %c ",&opcion);
		printf("-----------------------------------------------------------\n");
		
		if(carta == 7){
			printf("¡Has perdido! La carta es 7\n");
			break;
		}
		
		char cartaLet;
		
		switch(carta){
		case 1:
			cartaLet = 'A';
			break;
		case 11:
			cartaLet = 'J';
			break;
		case 12:
			cartaLet = 'Q';
			break;
		case 13:
			cartaLet = 'K';
			break;
		default:
			cartaLet = carta + '0';
			break;
		}
		
		if((opcion == 'A' || opcion == 'a') && carta > 7){
			printf("La carta era Alta! (%c).\n",cartaLet);
			puntos *= 2;

		}else if((opcion == 'B' || opcion == 'b') && carta < 7){
			printf("La carta era Baja! (%c).\n",cartaLet);
			puntos *= 2;

		}else{
			printf("¡Has perdido! La carta era %c \n",cartaLet);
			break;
		}
	}
	printf("-----------------------------------------------------------\n");
	printf("\tFin del Juego || Game Over\n\n");
	printf("Puntuacion Final: %d\n",puntos);
	printf("-----------------------------------------------------------\n");
	
	return 0;
}

