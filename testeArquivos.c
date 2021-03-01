#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool isVogal(char letra){
	letra = tolower(letra);
	if(strcmp(letra, 'a')||(letra=='i')||(letra=='e')||(letra=='o')||(letra=='u')){
		return true;
	}else{
		return false;
	}
}
int main(void){
	FILE *pont_arq;
	char texto_str[20];
	
	//int i;
	//abrindo o arquivo_frase em modo "somente leitura"
	pont_arq = fopen("arquivo_palavra.txt", "r");
	while(fgets(texto_str, 20, pont_arq) != NULL){
		if(isVogal(texto_str)){
			printf("%s", texto_str);
		}
	}
	
	fclose(pont_arq);
	getch();
	return(0);
}