/*exercício 6: Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	
	int vetor[40];
	int valor, par, i;
	par = 0;
	
	for (i = 0; i < 40; i++)
	{
		printf ("\nDigite o valor do vetor na posicao %d\n", i);
		scanf ("%d", &vetor[i]);
	}
	
	
	printf ("\nPreenchimento completo\n");
	
	for (i = 0; i < 40; i++)
	{
		if (vetor[i] < 0)
		{
			vetor[i] = 0;
		}
		printf ("\n vetor[%d] => %d", i, vetor[i]);
	}
	
	return 0;
}
