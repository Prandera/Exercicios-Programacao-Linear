#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz[5][5];
	int i, j, soma=0, k=-1;
	
	for(i=0; i<5; i++)
		for(j=0; j<5; j++){
			k+=2;
			matriz[i][j]=k;
		}
		
	printf("Conteúdo da Matriz:\n");
	for(i=5; i>0; i--){
		printf("\n");
		for(j=5; j>0; j--){
			printf("%i	", matriz[i-1][j-1]);
			soma+=matriz[i-1][j-1];
		}
	}
	
	printf("\n\nSoma dos valores: %i", soma);

		
	return 0;
}
