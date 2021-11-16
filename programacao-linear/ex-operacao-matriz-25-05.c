#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int soma=0, mat[8][5], mat2[8][5];
	int i, j, k=6;
	
	printf("Inserindo automaticamente a PRIMEIRA matriz com valores de 6 em 6.\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++){
			mat[i][j]=k;
			k+=6;
		}
	
	printf("Conteúdo da PRIMEIRA matriz:\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			printf("%d\t", mat[i][j]);
			
	
	printf("\n\nInserindo automaticamente a SEGUNDA matriz com valores de 6 em 6.\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			mat2[i][j]=mat[i][j]/3;
	
	
	printf("Conteúdo da SEGUNDA matriz:\n");
	for(i=0; i<8; i++)
		for(j=0; j<5; j++)
			printf("%d\t", mat2[i][j]);

	return 0;
}
