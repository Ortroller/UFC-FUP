#include "func.h"


void alugar(int ind, int *qtdp){ // Cadastra quarto à pessoa, se existente
	
	char cp[12];
	int i;
	
	printf("\nDigite o CPF do locatario:");
	scanf(" %s", cp);
	
	for(i=0; i<qtdp; i++){
		if(strcmp(cp, pessoas[i].cpf) == 0){
			pessoas[i].num = quartos[ind].numero; // Marca no struct pessoa o numero do quarto
			strcpy(quartos[ind].cpf, cp); // Marca o CPF do locatario no quarto
			quartos[ind].disponibilidade = 1; // Indica que o quarto está locado
			return;
		}
	}
	printf("\n!! CPF NAO ENCONTRADO !!");
	return;
	
}

