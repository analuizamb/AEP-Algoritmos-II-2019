//16: Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.
#include <stdio.h>

int main()
{
    int linha, coluna;
	int matriz[10][10];
	int auxiliar=0, maior_linha, maior_coluna;

    for( linha = 0; linha < 10; linha++ )
    {
        for( coluna = 0; coluna < 10; coluna++ )
        {
            printf("Digite o valor da posicao [%d][%d] = ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            
            if( matriz[linha][coluna] > auxiliar )
            {
                maior_linha = linha+1;
                maior_coluna = coluna+1;
                auxiliar = matriz[linha][coluna];
            }
        }
    }
    printf("\n\n A posicao do maior numero e linha[%d] e coluna[%d].\n\n", maior_linha, maior_coluna);
    getch();
    getch();
}
