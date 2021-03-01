#include <stdio.h>
#include <string.h>
int main(int argc, char** argv){
    char nome[300];
    int cont, i,j;
    printf("coloque o nome:\n");
    fgets(nome,300,stdin);
    for(i = 0; i < strlen(nome); i++){
        if((nome[i]== 'a') or (nome[i]== 'e') or (nome[i]== 'i') or (nome[i]== 'o') or(nome[i]== 'u')){
            cont++;    
        }
    }
    printf("esse nome possui %d vogais\n",cont);
    
    
    char string[100];
    printf("coloque o caracter:\n");
    fgets(string,100,stdin);
    for(i=0;string[i]!='\0';i++){
        if((string[i]== 'a') or (string[i]== 'e') or (string[i]== 'i') or (string[i]== 'o') or (string[i]== 'u')){
            j=i;
            while(string[j]!= '\0'){
                nome[i]=string[i+1];
                j++;
                
            }
            cont++;
            if( (string[i]== 'a') or (string[i]== 'e') or (string[i]== 'i') or (string[i]== 'o') or (string[i]== 'u')){
                i--;
            }
    
        }
    }
    printf("%s\n",nome);
    return 0;
}