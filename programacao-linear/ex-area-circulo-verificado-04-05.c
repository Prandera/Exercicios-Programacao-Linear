#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	const float pi=3.14;
	float area, r;
	int i=0;
	
	printf("	*** C�LCULO DA �REA DA CIRCUNFER�NCIA ***");
	printf("\n\n !! Aten��o, use valores estritamente POSITIVOS !!");
	while(i==0){
	printf("\n\n Por favor, digite o valor do RAIO: ");
	scanf("%f", &r);
		if(r<=0)
			printf("\n Valor inv�lido (negativo ou nulo)! Execute o programa novamente.");
		else
			i++;
	}
	
	area=pi*(r*r);
	printf("\n Area da Circunfer�ncia: %.2f", area);	
	return 0;
}
