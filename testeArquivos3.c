#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	FILE *file;
	file= fopen("arquivo_palavra.txt","r");
	
	if (file == NULL){
		printf("IMPOSSIVEL ABRIR ESTE ARQUIVO");
		getchar();
		exit(0);
	}
	int x;
	char frase[100];
	char nome[]="lindo";
	while(fgetc(frase,100,file)!= NULL){
	
	}
	x= (strcmp(frase,nome));
	if(x==1){
		printf(" Encontrado\n");
	}
	printf("Não Encontrado\n");
	fclose(file);
	printf(" %s , %s\n",frase ,nome );
	return 0;
}
