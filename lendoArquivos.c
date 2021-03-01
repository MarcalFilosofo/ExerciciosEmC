#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	FILE *pont_arq;
	//abrir arquivo
	pont_arq = fopen("arquivo.txt", "a");
	
	//fechando arquivo
	fclose(pont_arq);
	
	printf("Deu bom");
	return 0;
}