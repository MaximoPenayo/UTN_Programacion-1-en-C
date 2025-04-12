#include <stdio.h>

int main(){
	
	int cantNotas,i;
	int notas;
	int contador=0;
	float promedio;
	
	printf("Ingrese la cantidad de Notas que desea registrar: ");
	scanf("%d",&cantNotas);
	
	for(i=1; i<=cantNotas;i++){
		printf("Ingrese su nota N°%d: ",i);
		scanf("%d",&notas);
		contador= contador+notas;
	}
	
	if(cantNotas>0){
		promedio = (float)contador / cantNotas;
		printf("Su promedio es de: %.2f\n",promedio);
		
	}
	
	
	
	return 0;
}
