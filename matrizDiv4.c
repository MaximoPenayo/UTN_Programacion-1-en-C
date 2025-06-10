/*Dada una matriz cuadrada de numeros enteros 4x4
Se pide: cargar la matriz. mostrar el resultado en forma de matriz
la matriz se carga usando sentencias repetitivas o iterativas 
las dimensiones de la matriz se deben especificar con DEFINE
usar procedimiento para cargar la matriz.
cargar un numero divisible por 4 de la matriz en un arreglo.
Usar funcion para este calculo. Mostrar el arreglo por pantalla.
Indicar cuantos numeros se cargaron en el arreglo.
A partir del arreglo cargar una cadena considerando lo siguiente:
Para el numero 4 del arreglo reemplazarlo por la letra"A", el numero 8 por la letra "E"
El numero 12 por la letra "i", el 16 por la letra "o" y el 18 por la letra "u".
Mostrar la cadena y usar la funcion STRLEN*/
#include <stdio.h>
#include <string.h>
#include<conio.h>
#define N 4

void cargarMatriz(int mat[N][N]);
void mostrarMatriz(int mat[N][N]);
int cargarDiv4(int mat[N][N], int arr[]);
void crearCadena(int arr[], int tam, char cadena[]);

int main() {
	int i,j;
    int matriz[N][N];
    int arreglo[N*N];
    char cadena[N*N + 1]; 
    
    cargarMatriz(matriz);
    printf("Matriz cargada:\n");
    printf("----------------------\n");
    mostrarMatriz(matriz);
    printf("----------------------\n");

    int cantidad = cargarDiv4(matriz, arreglo);
    printf("************************************************\n");
    printf("\nNumeros divisibles por 4 encontrados: %d\n", cantidad);
    printf("\n************************************************\n");
    printf("Presione una tecla para limpiar la pantalla...");
	getch();
	system("cls");

    printf("***********************************************************************************\n");
    printf("\tArreglo de numeros divisibles por 4: ");
    
    for (i = 0; i < cantidad; i++) {
        printf("%d ", arreglo[i]);
    }
    
    printf("\n***********************************************************************************\n");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -\n");
    crearCadena(arreglo, cantidad, cadena);
    printf("\nCadena resultante: %s\n", cadena);
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("Longitud de la cadena: %lu\n", strlen(cadena));
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - -\n");

    return 0;
}

void cargarMatriz(int mat[N][N]) {
	int i,j;
    printf("Ingrese los elementos de la matriz %dx%d:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void mostrarMatriz(int mat[N][N]) {
	int i,j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
}

int cargarDiv4(int mat[N][N], int arr[]) {
	int i,j;
    int k = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] % 4 == 0) {
                arr[k] = mat[i][j];
                k++;
            }
        }
    }
    return k;
}

void crearCadena(int arr[], int tam, char cadena[]) {
	int i;
    int pos = 0;
    for (i = 0; i < tam; i++) {
        switch (arr[i]) {
            case 4: cadena[pos++] = 'A'; break;
            case 8: cadena[pos++] = 'E'; break;
            case 12: cadena[pos++] = 'I'; break;
            case 16: cadena[pos++] = 'O'; break;
            case 18: cadena[pos++] = 'U'; break;
            default:
                break;
        }
    }
    cadena[pos] = '\0';
}

