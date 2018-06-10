#include "func.h"


void alugar(int ind, int *qtdp, folk *pessoas, room *quartos){ // Cadastra quarto à pessoa, se existente
	
	char cp[12];
	int i;
	
	printf("\nDigite o CPF do locatario:");
	scanf(" %s", cp);
	
	for(i=0; i<*qtdp; i++){
		if(strcmp(cp, pessoas[i].cpf) == 0){ // procura o locatário pelo CPF	
			if(pessoas[i].num <=0){
				pessoas[i].num = quartos[ind].numero; // Marca no struct pessoa o numero do quarto
				strcpy(quartos[ind].cpf, cp); // Marca o CPF do locatario no quarto
				quartos[ind].disponibilidade = 1; // Indica que o quarto está locado
				return;
			}else{
				printf("pessoa j%c vinculada a um quarto", 160);
				return;
			}
		}
	}
	printf("\n!! CPF NAO ENCONTRADO !!\n");
	return;
	
}

