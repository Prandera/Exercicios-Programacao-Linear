#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float B, b, h, a;
	int i=0;
	printf("	*** CÁLCULO DA ÁREA DO TRAPÉZIO *** \n\n\n");
	while(i==0){
		printf("! Atenção, digite valores estritamente positivos !");
		printf("\n\n Por favor, digite o valor da MENOR base: ");
		scanf("%f", &b);
		printf("\n Por favor, digite o valor da MAIOR base: ");
		scanf("%f", &B);
	
		if(b>=B){
			printf("\n\n Valores das bases estão INCORRETOS.");		
		}else{
			printf("\n Por favor, digite o valor da ALTURA: ");
			scanf("%f", &h);
			if(B<=0 || b<=0 || h<=0){
				printf("\n\n Valores INVÁLIDOS (negativo ou nulo).");
			}else
				i++;
		}
	}
	a=(B+b)*h/2;
	printf("\n\n Área do Trapézio: %.2f", a);
			
		return 0;
}
