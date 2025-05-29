/*Ingresar dos cadenas llamadas C1 y C2
mostrar el contenido de C1 y C2
Indicar cual es la cadena mas larga
Concatenar la cadena mas larga a la mas corta
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char C1[MAX], C2[MAX];
    char resultado[2 * MAX];
    
    printf("Ingrese la cadena C1: ");
    fgets(C1, MAX, stdin);
    C1[strcspn(C1, "\n")] = '\0';

    printf("Ingrese la cadena C2: ");
    fgets(C2, MAX, stdin);
    C2[strcspn(C2, "\n")] = '\0';

    printf("\nCadena C1: %s\n", C1);
    printf("Cadena C2: %s\n", C2);

    if (strlen(C1) > strlen(C2)) {
        printf("C1 es la cadena mas larga.\n");

        strcpy(resultado, C2);
        strcat(resultado, C1);
    } else if (strlen(C2) > strlen(C1)) {
        printf("C2 es la cadena mas larga.\n");

        strcpy(resultado, C1);
        strcat(resultado, C2);
    } else {
        printf("Ambas cadenas tienen la misma longitud.\n");

        strcpy(resultado, C1);
        strcat(resultado, C2);
    }

    printf("Resultado de la concatenacion: %s\n", resultado);

    return 0;
}


