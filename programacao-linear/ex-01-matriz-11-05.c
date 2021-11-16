#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz[10][5];
	int i, j, k=0;
	
	printf("Alimentando automaticamente a Matiz com multiplos de 2\n\n");
	
	for(i=0; i<10; i++)
		for(j=0; j<5; j++){
			k+=2;
			matriz[i][j]=k;
		}
	
	printf("Conteúdo da Matriz:\n");
	for(i=0; i<10; i++){
		printf("\n");
		for(j=0; j<5; j++)
			printf("%i |", matriz[i][j]);
	}
			
	return 0;
}
