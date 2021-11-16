#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	const float pi=3.14;
	float area, r;
	
	printf("	*** CÁLCULO DA ÁREA DA CIRCUNFERÊNCIA ***");
	printf("\n\n!! Atenção, use valores estritamente POSITIVOS !!");
	printf("\n\nPor favor, digite o valor do RAIO: ");
	scanf("%f", &r);
	if(r<=0){
		printf("\nValor inválido (negativo ou nulo)! Execute o programa novamente.");
	}else{
		area=pi*(r*r);
		printf("\nArea da Circunferência: %.2f", area);
	}
	
	return 0;
}
