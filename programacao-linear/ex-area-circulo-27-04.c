#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	const float pi=3.14;
	float area, r;
	
	printf("	*** C�LCULO DA �REA DA CIRCUNFER�NCIA ***");
	printf("\n\n!! Aten��o, use valores estritamente POSITIVOS !!");
	printf("\n\nPor favor, digite o valor do RAIO: ");
	scanf("%f", &r);
	if(r<=0){
		printf("\nValor inv�lido (negativo ou nulo)! Execute o programa novamente.");
	}else{
		area=pi*(r*r);
		printf("\nArea da Circunfer�ncia: %.2f", area);
	}
	
	return 0;
}
