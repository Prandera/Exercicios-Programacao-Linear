#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float base, altura, area;
	int i=0;
	
	printf("	*** C�LCULO DA �REA DO TRI�NGULO ***");
	printf("\n\n !! Aten��o, use valores estritamente POSITIVOS !!");
	while(i==0){
		printf("\n\nPor favor, digite a BASE do tri�ngulo: ");
		scanf("%f", &base);
		if(base<=0)
			printf("\nValor inv�lido (negativo ou nulo)! Tente novamente.");
		else{
			printf("Por favor, digite a ALTURA do tri�ngulo: ");
			scanf("%f", &altura);
			if(altura<=0)
				printf("\nValor inv�lido (negativo ou nulo)! Tente novamente.");
			else
				i++;
		}
	}

	area=(base*altura)/2;
	printf("�rea do Tri�ngulo: %.2f", area);
	
	return 0;
}
