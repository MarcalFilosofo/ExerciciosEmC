#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char isVogal(char letra){
	letra = tolower(letra);
	if((letra=='a')||(letra=='i')||(letra=='e')||(letra=='o')||(letra=='u')){
		return true;
	}else{
		return false;
	}
}
int main(int argc, char** argv){
	char nome[300];
	char nomeAlterado[300];
	int i;
	int vogais = 0;
	printf("Digite um nome: ");
	fgets(nome,300, stdin);
	for(i = 0; i < strlen(nome); i++){
		if(isVogal(nome[i])){
			vogais++;
		}
	}
	printf("Existem %i no seu nome\n", vogais);
	
	
	for(i = 0; i < strlen(nome); i++){
		if(isVogal(nome[i])){
			printf("Altere o caracter %c: ", nome[i]);
			gets(&nomeAlterado[i]);
		}else{
			nomeAlterado[i] = nome[i];
		}
	}
	
	printf("\n\n%s", nome);
	printf("\n\n%s", nomeAlterado);
}