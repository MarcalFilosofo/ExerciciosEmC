#include <stdio.h>
typedef struct funcionario {
    long int matricula;
    float salario_bruto;
    int carga_horaria;
}funcionario;
void endereco_de_funcionario( funcionario *x){
    struct funcionario now;
    printf("coloque a matricula pf:\n");
    now.matricula; 
    scanf("%ld",now.matricula);

    printf("coloque o salario bruto pf:\n");
    now.salario_bruto; 
    scanf("%f",now.salario_bruto);

    printf("coloque a carga horaria pf:\n");
    now.carga_horaria; 
    scanf("%d",now.carga_horaria);

}
int main(int argc, char** argv){
    int jack;
    printf("jack coloque os seus dados pf:\n");
    funcionario y;
    endereco_de_funcionario(&y);
    printf("%i",&y);

    return 0;
}