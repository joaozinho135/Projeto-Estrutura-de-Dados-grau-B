#include<stdio.h>
#include<stdlib.h>
#define Lin 10
#define Col 10
int main()
{
	int l, c, Mat[Lin][Col]; 
    char estado;
	
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
        	while ((estado = fgetc(arq_eixos)) !=EOF) {
			printf("%c", estado);
		}
			
            fscanf(arq_matriz,"%d ", &Mat[l][c]);  
            printf("%d ", Mat[l][c]);//testar se a impressão esta corret         
    }
    printf("\n");
    }
    fclose(arq_matriz); //fechar arquivo
    return 0;
	}
}
