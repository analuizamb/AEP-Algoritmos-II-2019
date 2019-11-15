/*exercício 9: Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escreve-los.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int i;
	char fra[100];
	
		printf ("\nInsira a frase\n");
		gets(fra);
		printf ("\nFrase original:\n %s", fra);
		
		for (i = 0; i < strlen(fra); i++)
		{
			if (fra[i] == ' ')
			{
				fra[i] = '.';
			}
		}
		printf ("\nFrase alterada: \n %s \n", fra);
	return 0;
}
