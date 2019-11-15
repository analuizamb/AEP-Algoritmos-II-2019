/*exercício 2: Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.*/

#include <stdio.h>

int main(){
	
	int num, i;
	int vet[11];
	num = 1;
	
	for (i=0; i<11; i++)
	{
		if (num %2 != 0)
		{
			vet[i] = num;
			num += 2;
		}
	}
	
	for (i=0; i<11; i++)
	{
		printf("\n No vetor %d o valor e %d", i, vet[i] );
	}
	 return 0;
	
}
