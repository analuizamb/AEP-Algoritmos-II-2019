/*exercício 8: Leia um vetor de 40 posições e acumule os valores do primeiro elemento no segundo, deste no terceiro e assim por diante.
Ao final, escreva o vetor obtido.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	
	int u, i;
	int vetor[40];
		
	for (i = 0; i < 40; i++)
	{
		printf ("\nInsira o valor do Vetor na posicao %d \n", i);
		scanf ("%d", &vetor[i]);
	}
	printf ("\nPreenchimento completo\n");
	
	for (i = 0; i < 40; i++)
	{
		u = i - 1;
		vetor[i] = vetor[i] + vetor[u];
		printf ("\n vetorA[%d] => %d", i, vetor[i]);
	}
	return 0;
}
