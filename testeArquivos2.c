#include <stdio.h>
#include <string.h>
char ch[10];
int r;
FILE *arq;
int main(){
    /*essas tr�s linhas a seguir se refere ao arquivo que voc� tem com os dados*/
    arq=fopen("meu_arquivo.txt","wt");
    fprintf(arq,"escrevendo qualquer coisa e mais alguma coisa sua senha seu login");
    fclose(arq);
    /*deixando elas voc� v� como funciona, mas quando for usar n�o precisa delas*/
    arq=fopen("meu_arquivo.txt","r");
    while(fscanf(arq,"%s",&ch)!=EOF){
        r=strcmp(ch,"senha");
        if(r==0){printf("A Senha � --> %s\n",ch);}
        r=strcmp(ch,"login");
        if(r==0){printf("O Login � --> %s\n\n",ch);}
    }
    fclose(arq);
    return 0;
}