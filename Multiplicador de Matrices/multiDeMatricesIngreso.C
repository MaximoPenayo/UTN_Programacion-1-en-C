#include <stdio.h>

int main() {
	
	int i,j,k;
	int matrizA[3][3];
	int matrizB[3][3];
	int matrizResult[3][3];
	
	printf("Ingrese los elementos de la Matriz A: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Elemento [%d][%d]: ",i,j);
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	printf("Ingrese los elementos de la Matriz B: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Elemento [%d][%d]: ",i,j);
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizResult[i][j]=0;
			for(k=0;k<3;k++){
				matrizResult[i][j] += matrizA[i][k] * matrizB[k][j];
			}
		}
	}
	printf("=================================\n");
	printf("Resultado de la Multiplicacion\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d\t",matrizResult[i][j]);
		}
		printf("\n");
	}
	printf("=================================\n");
	
	return 0;
}

