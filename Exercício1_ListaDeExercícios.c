/*1: Leia um  vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>
#include <stdlib.h>

int main(char *argv[], int argc){
	
	int x, y, soma, i;
	int vetorA[12];
	
	for (i=0;i<12;i++)
	{
		printf("\n Digite o elemento do vetor %d\n", i);
		scanf ("%d", &vetorA[i]);
	}
	printf ("\nVetor preenchido");
	
	for (i=0;i<12;i++)
	{
		printf ("\nO valor do elemento na posicao %d do vetor e de %d", i, vetorA[i]);	
	}
	
	printf ("\n\nDigite a posicao do primeiro valor para soma\n");
	scanf ("%d", &x);
	printf("\nDigite a posicao do segundo valor para soma\n");
	scanf ("%d", &y);
	
	soma = vetorA[x] + vetorA[y];
	
	printf ("\nO valor do vetor na posicao X e %d", vetorA[x]);
	printf ("\nO valor do vetor na posicao y e %d", vetorA[y]); 
	printf ("\nA soma dos valores e de %d", soma);
	getchar();
	
	return 0;
}
