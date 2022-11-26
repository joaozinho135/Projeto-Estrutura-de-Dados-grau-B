#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numeros=0;
	
	FILE *arq_matriz;
	arquivo = fread("Matriz.txt", "w");
	
	FILE *arq_eixos;
	arquivo = fread("Eixos.txt", "w");
	
	if (arq_matriz == NULL or arq_eixos == NULL)
	{
		printf("Matriz ou Eixos estão vazios!");
	}
	else {
		printf("Arquivo criado com sucesso!\n");
		
		for (numeros = 0; numeros <=40; numeros++)
		{
			if(numeros % 2 == 0)
			{
				fprintf(arquivo, "%d", numeros);
			}
		}
		fclose(arquivo);
	}
}
