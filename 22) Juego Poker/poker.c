#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Penayo Maximo Joel

/*Haga un programa que permita emular un juego de poker de alta-baja.
El usuario debe adivinar el valor de una carta diciendo si es alta o baja
y debe acertar si el valor de la carta es inferior a 7 (baja) o superior a 7 (alta) y si sale 7, pierde. 
Al finalizar la ronda se debe mostrar la carta que salió. 
El juego sigue mientras el usuario acierta la carta ganadora. 
Al perder se muestra la cantidad de puntos que van aumentando en dobles, es decir, inicia en uno, luego 2, luego 4, luego 8.
Las cartas de poker van del 1 al 13. 
*/

int main(){
	srand(time(NULL));
	int baraja,puntaje,perdiste;
	char selec;
	puntaje = 1;
	
	do{
		baraja = rand() % 13+1;
		printf("------------------------------------------\n");
		printf("\t\tPOKER GAME\t");
		printf("\nIngrese si la siguiente carta es Alta o Baja\n");
		printf("A - Alta\nB - Baja\nSeleccion: ");
		scanf("%s ",&selec);
		
		if(baraja < 7){
			printf("------------------------------------------\n");
			printf("La carta es Baja!\n");
			printf("La carta es %d\n",baraja);
			if(selec == 'b'){
				printf("Has ganado 2 puntos!\n");
				printf("------------------------------------------\n");
				puntaje *= 2;
			}else{
				printf("Has ganado %d puntos\n",puntaje);
				printf("Fin del Juego...\n");
				printf("------------------------------------------\n");
				perdiste = 1;
				break;
			}
			
		}else if(baraja>7){
			printf("------------------------------------------\n");
			printf("La carta es Alta!\n");
			printf("La carta es %d\n",baraja);
			if(selec == 'a'){
				printf("Has ganado 2 puntos!\n");
				printf("------------------------------------------\n");
				puntaje *= 2;
			}else{
				printf("Has ganado %d puntos\n",puntaje);
				printf("Fin del Juego...\n");
				printf("------------------------------------------\n");
				perdiste = 1;
				break;
			}
		}else{
			printf("------------------------------------------\n");
			printf("La carta es 7!\n\tGAME OVER\t\n");
			printf("Has ganado %d puntos\n",puntaje);
			printf("------------------------------------------\n");
		}
	
	
	}while(perdiste==0);
	return 0;
}
