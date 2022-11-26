#include<stdio.h>
#include<stdlib.h>
#define Lin 10
#define Col 10
int main()
{
	int l, c, Mat[Lin][Col]; 
    char estado[30];
	
	FILE *arq_matriz;
	arq_matriz = fopen("Matriz.txt", "r");
	
	FILE *arq_eixos;
	arq_eixos = fopen("Eixos.txt", "r");
	
	if (arq_matriz == NULL or arq_eixos == NULL)
	{
		printf("Matriz ou Eixos estão vazios!");
	}
	else {
	
    for(l=0;l<Lin;l++){
        for(c=0;c<Col;c++){
            fscanf(arq_matriz,"%d ", &Mat[l][c]);
            fgets(estado, 30, arq_eixos);    
            printf("%d ", Mat[l][c]);//testar se a impressão esta correta
    }
    printf("\n");
    }
    fclose(arq_matriz); //fechar arquivo
    return 0;
	}
}
