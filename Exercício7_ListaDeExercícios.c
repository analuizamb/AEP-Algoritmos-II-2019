/*exercício 7: Leia dois vetores de 20 posições e calcule um outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os valores
do segundo.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	
	int vetorA[20], vetorB[20], vetorC[40];
	int a, b, i;
	
	for (a=0; a<20; a++)
	{
		printf ("\nInsira o valor do Primeiro Vetor na posicao %d\n", a);
		scanf ("%d", &vetorA[a]);
	}
	for (b=0; b<20; b++)
	{
		printf ("\nInsira o valor do Segundo Vetor na posicao %d\n", b);
		scanf ("%d", &vetorB[b]);
	}
	a = 0, b = 0;
	printf ("\nPreenchimento completo\n");
	
	for (i=0; i<40; i++)
	{
		if (i%2 == 0)
		{
			vetorC[i] = vetorA[a];
			a++;
		}
		else if (i%2 != 0)
		{
			vetorC[i] = vetorB[b];
			b++;
		}
	printf ("\n vetorC[%d] => %d", i, vetorC[i]);
	}
	return 0;
}
