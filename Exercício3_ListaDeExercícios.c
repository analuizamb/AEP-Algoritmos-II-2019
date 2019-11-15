//3: Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-e-versa. Escreva ao final o vetor obtido.

#include<stdio.h>
	int main() {
	int vetor[16];
  	int x = 0;
  	int aux;
  	
	do
	{	printf("\n\nDigite um numero:\n");
		scanf ("%d", &vetor[x]);
		x++;
	}while (x <= 16);

		for(x = 0; x < 8; ++x)  {
			aux = vetor[x + 8];
			vetor[x + 8] = vetor[x];
			vetor[x] = aux;
		}
			for(x = 0; x < 16; ++x)
		    	printf("%d ", vetor[x]);
	return 0;
}
