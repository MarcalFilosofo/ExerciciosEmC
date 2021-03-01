#include <stdio.h>
typedef struct funcionario {
    long int matricula;
    float salario_bruto;
    int carga_horaria;
}funcionario;


void ImprimirFuncionario(funcionario F){
	printf("matricula: %ld  Salario: %f  Carga horaria: %i", F.matricula, F.salario_bruto, F.carga_horaria);
}


typedef struct enderecosFuncionarios{
	char endereco;
}enderecosFuncionarios;


int main(int argc, char** argv){
    funcionario Jack;
    
    printf("Digite a matrícula do funcionario:\n");
    scanf("%d", &Jack.matricula);
    printf("Digite o salario do funcionario:\n");
    scanf("%d", &Jack.salario_bruto);
    printf("Digite a carga horaria do funcionario:\n");
    scanf("%d", &Jack.carga_horaria);
    
    ImprimirFuncionario(Jack);
    return 0;
}