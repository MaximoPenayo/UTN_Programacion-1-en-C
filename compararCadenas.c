#include<stdio.h>
#include<string.h>

int main(){
	char primer_palabra[100];
	char segunda_palabra[100];
	printf("Ingrese una palabra: ");
	scanf("%s ",&primer_palabra);
	printf("Ingrese otra palabra: ");
	scanf("%s ",&segunda_palabra);

	if(strcmp(primer_palabra,segunda_palabra) == 0){
		printf("Las Palabras son iguales!");
	}else{
		printf("Las Palabras no son iguales :/");
	}
	
	return 0;
}
