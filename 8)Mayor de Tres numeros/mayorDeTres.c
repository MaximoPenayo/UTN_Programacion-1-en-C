#include <stdio.h>
/*El programa debe solicitar tres números y mostrar cuál es el mayor.
Si hay dos números iguales al mayor, indicarlo.
*/

#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Ingrese el valor de A: ");
	scanf("%d",&a);
	printf("Ingrese el valor de B: ");
	scanf("%d",&b);
	printf("Ingrese el valor de C: ");
	scanf("%d",&c);
	
	printf("\n");
	
	if(a>=b){
		if(a==b){
			printf("------------------------\n");
			printf("a:%d b:%d Son mayores e Iguales\n",a,b);
			printf("------------------------\n");
		}else{
			if(a>c){
				printf("------------------------\n");
				printf("a:%d es el Mayor\n",a);
				printf("------------------------\n");
			}else{
				if(a==c){
					printf("------------------------\n");
					printf("a:%d c:%d Son mayores e Iguales\n",a,c);
					printf("------------------------\n");
				}
			}
			
		}
	}else{
		if(b>c){
			printf("------------------------\n");
			printf("b:%d es el Mayor\n",b);
			printf("------------------------\n");
		}else{
			if(b==c){
				printf("------------------------\n");
				printf("b:%d c:%d Son mayores e Iguales\n",b,c);
				printf("------------------------\n");
			}
		}
	}
	printf("Fin del Programa...");
	return 0;
	
}

