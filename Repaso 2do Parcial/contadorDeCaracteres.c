#include<stdio.h>
#include<string.h>

int main(){
	char palabra[100];
	printf("Ingrese una palabra: ");
	scanf(" %s ",&palabra);

	int tamano = strlen(palabra);
	
	printf("Tu palabra tiene %d Caracteres!",tamano);
	
	
	return 0;
}
