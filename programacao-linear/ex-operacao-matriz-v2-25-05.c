#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int soma=0, mat[8][5], mat2[8][5], mat3[8][5];
	int i, j, k=1;
	
	printf("\n\nInserindo automaticamente a PRIMEIRA matriz com valores de 1 em 1.\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++){
			mat[i][j]=k;
			k++;
		}
	
	printf("Conteúdo da PRIMEIRA matriz:\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			printf("%d\t", mat[i][j]);
			
	
	printf("\n\n\nInserindo automaticamente a SEGUNDA matriz com valores ao quadrado.\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			mat2[i][j]=pow(mat[i][j], 2);
	
	
	printf("Conteúdo da SEGUNDA matriz:\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			printf("%d\t", mat2[i][j]);
			
	printf("\n\n\nInserindo automaticamente a TERCEIRA matriz com a soma dos valores das duas primeiras matrizes.\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			mat3[i][j]=mat[i][j]+mat2[i][j];
	
	printf("Conteúdo da TERCEIRA matriz:\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			printf("%d\t", mat3[i][j]);
			
	printf("\n");
	return 0;
}
