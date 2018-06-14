#include "func.h"

void listar(int *qtdq, int *qtdp, folk *pessoas, room *quartos){ // faz uma lista do  que quiser
	int i, op;
	
	printf("Listar: 1 - Pessoas | 2 - Quartos \n");
	scanf("%i", &op);
	
	switch(op){
		case 1: // lista de pessoas 
			for(i=0; i< *qtdp; i++){
				if(pessoas[i].ativo == 1){
					printf("\nNome: %s | CPF: %s | quarto: %i \n", pessoas[i].nome, pessoas[i].cpf, pessoas[i].num);
					printf("telefone: %s", pessoas[i].telefone);
				}
			}
			printf("\n	----------	\n"); // Fim da lista
			break; // Fim do caso 1(pessoas)
		case 2: // ---------------------------Lista de quartos --------------------------
			for(i=0; i< *qtdq; i++){
					printf("Numero: %i | ", quartos[i].numero);
					if(quartos[i].disponibilidade != 0){
						printf("Alugado\n");
					}else{
						printf("Disponivel\n");
					}
				}
			break;
	}
	system("pause");
	system("cls");
	return;
}

