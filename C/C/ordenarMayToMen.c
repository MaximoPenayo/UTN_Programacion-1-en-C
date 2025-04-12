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
	
	if(a>b){
		if(b>c){
			printf("------------------------\n");
			printf("%d - %d - %d \n",a,b,c);
			printf("------------------------\n");
		}if(a>c){
			printf("------------------------\n");
			printf("%d - %d - %d \n",a,c,b);
			printf("------------------------\n");
		}else{
			printf("------------------------\n");
			printf("%d - %d - %d \n",c,a,b);
			printf("------------------------\n");
		}
		
	}else{
		if(a>c){
			printf("------------------------\n");
			printf("%d - %d - %d \n",b,a,c);
			printf("------------------------\n");
		}else{
			if(b>c){
				printf("------------------------\n");
				printf("%d - %d - %d \n",b,c,a);
				printf("------------------------\n");
			}else{
				printf("------------------------\n");
				printf("%d - %d - %d \n",c,b,a);
				printf("------------------------\n");
			}
		}
	}
	
	printf("Fin del Programa...");
	return 0;
	
}
