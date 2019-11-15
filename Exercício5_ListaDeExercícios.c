/*exercício 5: Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
	
	int vlr, par, i;
	int vetorA[40];
	
	par = 0;
	
	for (i = 0; i < 40; i++)
	{
		printf ("\n Informe o valor do vetor na posicao %d\n", i);
		scanf ("%d", &vetorA[i]);
	}
	printf ("\nPreenchimento completo\n");
	
	for (i = 0; i < 40; i++)
	{
		if (vetorA[i] % 2 == 0)
		{
			par++;
		}
	}
	
	printf ("\nA quantidade de numeros pares nesse vetor e %d", par);
	
	return 0;
}
