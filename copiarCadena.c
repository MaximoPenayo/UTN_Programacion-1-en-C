#include<stdio.h>
#include<string.h>

int main(){
	
	char palabra[100];
	char mensaje[100];	
	printf("Ingrese una palabra: ");
	scanf(" %s ",&palabra);
	
	strcpy(mensaje,palabra);
	
	printf("Original: %s\nCopia: %s",palabra,mensaje);
	
	return 0;
}
