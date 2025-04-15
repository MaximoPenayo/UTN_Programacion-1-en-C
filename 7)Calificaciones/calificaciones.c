 #include <stdio.h>

//Penayo Maximo Joel

/*El programa debe pedir,  hasta que el usuario indique que ya no debe ingresar más notas,
 una nota (0-100) e indicar la calificación:
90-100: Sobresaliente
80-89: Muy Bueno
70-79: Bueno
60-69: Aprobado
Menos de 60: Reprobado
*/

int main() {
	
	int nota;
	int seguir;
	
	do{
	printf("\nIngrese su Nota: ");
	scanf("%d",&nota);
	
	if(nota>0 && nota<=100){
		if(nota >= 90 && nota <=100){
			printf("------------------------------\n");
			printf("Su calificacion es Sobresaliente\n");
			printf("------------------------------\n");
			
		}
		if(nota >= 80 && nota <=89){
			printf("------------------------------\n");
			printf("Su calificacion es Muy Bueno\n");
			printf("------------------------------\n");
			
		}
		if(nota >= 70 && nota <=79){
			printf("------------------------------\n");
			printf("Su calificacion es Bueno\n");
			printf("------------------------------\n");
			
		}
		if(nota >= 60 && nota <=69){
			printf("------------------------------\n");
			printf("Su calificacion es Aprobado\n");
			printf("------------------------------\n");
		}
		if(nota < 60){
			printf("------------------------------\n");
			printf("Su calificacion es Reprobado\n");
			printf("------------------------------\n");
		}
		
		printf("------------------------------\n");
		printf("Desea incluir otra nota?\n 1-Si 0-No: ");
		scanf("%d",&seguir);
	}else{
		printf("Ingrese una calificacion valida! (0-100)");\
		seguir = 1;
	}
		
	} while(seguir==1);
	
	return 0;
}

