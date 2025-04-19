#include <stdio.h>

int main() {
	int i;
	int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 98, 12};
	int size = sizeof(original) / sizeof(original[0]);
	int modificado[size];
	
	for(i = 0; i < size; i++){
		if(original[i] % 2 != 0){
			modificado[i] = original[i] * 2;
		}else{
			modificado[i] = original[i];
		}
	}
	
	printf("========================================================\n");
	printf("\t\tArreglo Modificado\n\n");
	for(i = 0; i < size ; i++){
		printf("%d ", modificado[i]);
	}
	printf("\n");
	printf("========================================================\n");
	
	return 0;
}

