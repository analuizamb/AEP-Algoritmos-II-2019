#include <stdio.h>
#include <string.h>

main ()
{	
	char nome [30];
	char sobrenome [30];
	int tamanho1, tamanho2;
	
	//inserção de nome e sobrenome
	printf ("\n Digite o seu nome: ");
	gets(nome);
	printf ("\n Digite o seu sobrenome: ");
	gets(sobrenome);
	
	//concatenar nome e sobrenome
	strcat (nome, " ");
	strcat(nome, sobrenome);
	printf ("\n Ao concatenar as strings tem-se que o nome completo e %s ", nome);
	printf ("\n");
	
	//nome em maiúsculo e minúsculo
	strlwr(nome);
	printf ("\n O nome em minusculo e: %s", nome);
	strupr(nome);
	printf ("\n O nome em maiusculo e: %s", nome);
	printf ("\n");
	
	//mostra as 2 primeiras letras do nome
	//strncpy (nome, "Ana",2);
	//gets(nome);
	
	//verifica se um é substring do outro
	if (strstr (sobrenome, nome) == 0);
	{	
		printf ("\n O sobrenome esta contido na variavel nome");
	}
	
	//informa tamanho da string
	printf ("\n");
	tamanho1 = strlen(nome);
	tamanho2 = strlen(sobrenome);
	printf ("\n O comprimento do nome e: %d", tamanho1);
	printf ("\n O comprimento do sobrenome e: %d", tamanho2);
	printf ("\n");
	
	//copia uma string na outra
	printf ("\n");
	strcpy (nome, "\n Apelido: Aninha");
	puts(nome);
	
	//comparar nome e sobrenome
	if (strcmp (nome, sobrenome) != 0)	{
		 printf("\n Diferente");
	}
	else {
		printf ("\n Igual");
	}
}
