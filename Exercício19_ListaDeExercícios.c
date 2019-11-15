//19: Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
#include <stdio.h>

int main()
{
    int linha, coluna;
	int matriz[6][6];
	int contador=0;

    for( linha = 0; linha < 6; linha++ )
    {
        for( coluna = 0; coluna < 6; coluna++ )
        {
           printf("Digite o valor de [%d][%d] = ", linha+1, coluna+1);
           scanf("%d", &matriz[linha][coluna]);
           
	           if( matriz[linha][coluna] > 10 )
	        	contador++;
        }
    }
    printf("\n\nA matriz possui %d numeros maiores que 10.\n\n", contador);
    getch();
}
