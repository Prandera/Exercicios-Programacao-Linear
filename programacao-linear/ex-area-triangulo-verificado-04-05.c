#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float base, altura, area;
	int i=0;
	
	printf("	*** CÁLCULO DA ÁREA DO TRIÂNGULO ***");
	printf("\n\n !! Atenção, use valores estritamente POSITIVOS !!");
	while(i==0){
		printf("\n\nPor favor, digite a BASE do triângulo: ");
		scanf("%f", &base);
		if(base<=0)
			printf("\nValor inválido (negativo ou nulo)! Tente novamente.");
		else{
			printf("Por favor, digite a ALTURA do triângulo: ");
			scanf("%f", &altura);
			if(altura<=0)
				printf("\nValor inválido (negativo ou nulo)! Tente novamente.");
			else
				i++;
		}
	}

	area=(base*altura)/2;
	printf("Área do Triângulo: %.2f", area);
	
	return 0;
}
