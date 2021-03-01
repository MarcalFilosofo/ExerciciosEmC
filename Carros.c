#include <stdio.h>
#include <string.h>
typedef struct carro {
    char modelo[50];
    float consumoPorDistancia
}carro;


void main(){
	carro carros[5];
	int i;
	//carros[0].consumo = 50;
	//printf("%f",carros[0].consumo);
	
	
	for(i = 0; i < 2; i++){
		printf("Digite o modelo do carro:");
		scanf("%s", &carros[i].modelo);
		printf("Digite quantos kilometros por litro o carro faz:");
		scanf("%f", &carros[i].consumoPorDistancia);
	}
	

	for (i = 0; i < 2; i++){
		printf("%s ", carros[i].modelo);
		printf("%0.2f\n", carros[i].consumoPorDistancia);
	}
}