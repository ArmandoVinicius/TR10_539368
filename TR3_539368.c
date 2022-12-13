#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
   	
   	for(i = 0; i < 200; i++) {
        x[i] = 0;
    }

    y = 0;

	printf("[0 ~ 5000] Adicionar um número\n[-1] Cancelar operação e mostrar resultados\n");

    while(y != -1) {
        printf("Digite um número: ");
        scanf("%d", &y);

        if(y >= 0 && y <= 5000) {
			z = y / 32;
			k = y % 32;

			x[z] = (1 << k) | x[z];
        } else if(y != -1) {
			printf("Inserção inválida, por favor insira um valor válido!\n");
		}
    }

	printf("Os números digitados em ordem crescente foram:\n");
	for (i = 0; i < 200; i++) {
		for (w = 0; w < 32; w++) {
			if((x[i] >> w) & 1) {
				printf("%d ", w + i * 32);
			}
		}
	}
	
   	
   	//#########################
   
	return 0;  
}