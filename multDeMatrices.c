#include <stdio.h>

int main() {
	int i,j,k;
    int matriz1[3][3] = {
	{1, 2, 3}, 
	{4, 5, 6}, 
	{7, 8, 9}};
    int matriz2[3][3] = {
	{9, 8, 7}, 
	{6, 5, 4}, 
	{3, 2, 1}};
    int resultado[3][3] = {0};
    

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
    
    printf("-----------------------------------------\n");
    printf("Resultado de la Multiplicacion\t\t|\n");
	printf("-----------------------------------------\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    printf("-----------------------------------------\n");

    return 0;
}

