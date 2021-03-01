#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  FILE *pont_arq;
  char texto_str[200];
  char aux;
  int contVogal = 0;
  //abrindo o arquivo_frase em modo "somente leitura"
  pont_arq = fopen("arquivo_palavra.txt", "r");
  
  //enquanto não for fim de arquivo o looping será executado
  //e será impresso o texto
  while(fgets(texto_str, 2, pont_arq) != NULL){
  		aux = texto_str;
	  if(texto_str == "G"){
	  	contVogal++;
		  printf("%s", texto_str);
	  }
  }
  printf("%i", contVogal);
  
  //fechando o arquivo
  fclose(pont_arq);
  
  //getch();
  return(0);
}