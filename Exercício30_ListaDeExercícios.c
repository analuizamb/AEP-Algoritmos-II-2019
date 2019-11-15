/*exercício 30: Leia uma matriz 100 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 100 alunos. Leia também um vetor de 10 posições
contendo o gabarito d e respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor
Resultado, contendo a pontuação correspondente.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 
int main ()
{
	int i,j;
	int acertos[100];
	char matriz[100][10];
	char nota;
	char gab[10];

	printf ("\nCriar gabarito:\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("\nQuestao %d:\nMarque a-b-c-d = ", i+1);
		scanf ("%c", &gab[i]);
		getchar();
	}

	for (i = 0; i < 100; i++)
	{
		acertos[i] = 0;
		printf("Informar respostas do aluno %d.\n", i+1);
		
		for (j = 0; j < 10; j++)
		{
			printf ("Questao %d:\n", j+1);
			scanf ("%c", &matriz[i][j]);
			getchar();
	
			if (matriz[i][j] == gab[i])
			{
				acertos[i] = acertos[i] + 1;
			}
		}
	}
	
	for (i = 0; i < 100; i++)
	{
		printf("O aluno %d teve %d acertos!\n", i, acertos[i]);
	}
	getchar();
	return(0);
}
