#include <stdio.h>
#include <math.h>
 
//Penayo Maximo Joel
//LEGAJO: 30412

int main() {
	float a, b, c, x1, x2, r;
	
	printf("Este algoritmo calculara las Raices de una operacion cuadratica ax^2+bx+c=0 \n");
	printf("Ingrese el valor de a \n");
	scanf("%f", &a);
	
	if (a == 0) {
		printf("Error el valor (a) no puede ser cero\n");
		return 1;
	}
	
	printf("Ingrese el valor de b \n");
	scanf("%f", &b);
	printf("Ingrese el valor de c \n");
	scanf("%f", &c);
	
	r = (pow(b, 2) - 4 * a * c);
	
	if (r < 0) {
		printf("La ecuacion no tiene raices reales\n");
	} else {
		x1 = (-b + sqrt(r)) / (2 * a);
		x2 = (-b - sqrt(r)) / (2 * a);
		
		printf("La Primera Raiz será x1= %.2f \n", x1);
		printf("La Segunda Raiz será x2= %.2f \n", x2);
	}
	
	return 0;
}
