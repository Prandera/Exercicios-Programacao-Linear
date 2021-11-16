#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float media, menor=0;
	float vetor[5];
	int i;
	
	//Alimentar o vetor.
	for(i=0; i<5; i++){
		printf("Digite o %iº número do Vetor: ", i+1);
		scanf("%f", &vetor[i]);
	}
	
	//Calcular o menor valor.
	menor=vetor[0];
	for(i=1; i<5; i++){
		if(vetor[i]<menor)
			menor=vetor[i];
	}
	
	printf("\n\n");
	
	//Recebendo todos os valores para calcular a média e exibindo o vetor.
	for(i=0; i<5; i++){
		media+=vetor[i];
		printf("%.2f	", vetor[i]);
	}
		
	
	printf("\n\nMenor valor digitado: %.2f", menor);
	printf("\nMédia dos valores digitados: %.2f", media/5);
		
	return 0;
}
