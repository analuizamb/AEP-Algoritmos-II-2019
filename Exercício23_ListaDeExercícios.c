//23: Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao final.
#include <stdio.h>

int main()
{	int linha, coluna;
	int matriz[5][5];
	int x,y;
	
	for(linha = 0; linha < 5; linha++)
    {
        for(coluna = 0; coluna < 5; coluna++)
        {
           printf("Digite o valor de [%d][%d] = ", linha+1, coluna+1);
           scanf("%d", &matriz[linha][coluna]);
		}
	printf ("fim coluna");
	}
	for(linha = 0; linha < 5; linha++)
   	{
        for(coluna = 0; coluna < 5; coluna++)
        {
        		if (linha == 0 && coluna == 0){
        			x = matriz[0][4];
        			matriz[0][4] = matriz[0][0];
        			matriz[0][0] = x;
        		}
	        		if (linha == 1 && coluna == 1){
	        			x = matriz[1][1];
	        			matriz[1][1] = matriz[1][3];
	        			matriz[1][3] = x;
	        		}
		        		if (linha == 1 && coluna == 1){
		        			x = matriz[3][1];
		        			matriz[3][1] = matriz[3][3];
		        			matriz[3][3] = x;
		        		}
			        		if (linha == 1 && coluna == 1){
			        			x = matriz[4][0];
			        			matriz[4][0] = matriz[4][4];
			        			matriz[4][4] = x;
			        		}
		}
	}
	
	for(linha = 0; linha < 5; linha++)
    {
        for(coluna = 0; coluna < 5; coluna++)
        {
           scanf("%d", &matriz[linha][coluna]);
		}
	}
	return(0);
}
	
