#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float B, b, h, a;
	int i=0;
	printf("	*** C�LCULO DA �REA DO TRAP�ZIO *** \n\n\n");

	printf("! Aten��o, digite valores estritamente positivos !");
	printf("\n\n Por favor, digite o valor da MENOR base: ");
	scanf("%f", &b);
	printf("\n Por favor, digite o valor da MAIOR base: ");
	scanf("%f", &B);
	
	if(b>=B){
		printf("\n\n Valores das bases est�o INCORRETOS. Execute o programa novamente");	
		}else{
			printf("\n Por favor, digite o valor da ALTURA: ");
			scanf("%f", &h);
			if(B<=0 || b<=0 || h<=0){
				printf("\n\n Valores INV�LIDOS (negativo ou nulo). Execute o programa novamente");
			}else{
				a=(B+b)*h/2;
				printf("\n\n �rea do Trap�zio: %.2f", a);
			}
		}
	return 0;	
}
	

