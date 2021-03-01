#include <stdio.h>
#include <string.h>
char ch[10];
int r;
FILE *arq;
int main(){
    /*essas três linhas a seguir se refere ao arquivo que você tem com os dados*/
    arq=fopen("meu_arquivo.txt","wt");
    fprintf(arq,"escrevendo qualquer coisa e mais alguma coisa sua senha seu login");
    fclose(arq);
    /*deixando elas você vê como funciona, mas quando for usar não precisa delas*/
    arq=fopen("meu_arquivo.txt","r");
    while(fscanf(arq,"%s",&ch)!=EOF){
        r=strcmp(ch,"senha");
        if(r==0){printf("A Senha é --> %s\n",ch);}
        r=strcmp(ch,"login");
        if(r==0){printf("O Login é --> %s\n\n",ch);}
    }
    fclose(arq);
    return 0;
}