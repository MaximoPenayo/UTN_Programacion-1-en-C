#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXTO 200

int esVocal(char c) {
    c = tolower((unsigned char)c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int contarPalabras(const char* oracion) {
	int i;
    int palabras = 0;
    int enPalabra = 0;
    for (i = 0; oracion[i] != '\0'; i++) {
        if (oracion[i] != ' ') {
            if (!enPalabra) {
                palabras++;
                enPalabra = 1;
            }
        } else {
            enPalabra = 0;
        }
    }
    return palabras;
}

int main() {
	int i,j;
    char texto[MAX_TEXTO] = "Hoy-es-miercoles.Hoy-es-la-clase-de-programacion.Estudio-programacion.";
    printf("Longitud de la cadena: %lu\n\n", strlen(texto));
    
    char oracionActual[100];
    int index = 0;
    int vocales = 0;

    char oracionMasLarga[100] = "";
    int maxPalabras = 0;

    printf("Oraciones separadas:\n\n");

    for (i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];
        
        if (esVocal(c)) {
            vocales++;
        }

        if (c != '.') {
            oracionActual[index++] = c;
        } else {
            oracionActual[index] = '\0';

            for (j = 0; oracionActual[j] != '\0'; j++) {
                if (oracionActual[j] == '-') {
                    oracionActual[j] = ' ';
                }
            }

            printf("%s\n\n", oracionActual);

            int cantidadPalabras = contarPalabras(oracionActual);
            if (cantidadPalabras > maxPalabras) {
                maxPalabras = cantidadPalabras;
                strcpy(oracionMasLarga, oracionActual);
            }

            index = 0;
        }
    }
	printf("**************************************************\n");
    printf("Cantidad total de vocales: %d\n", vocales);
	printf("\n**************************************************\n");
    printf("\nOracion con mas palabras:\n%s\n\n", oracionMasLarga);
    printf("Cantidad de palabras: %d\n", maxPalabras);
    printf("\n**************************************************\n");

    return 0;
}

