#include "func.h"

void procurar(int *qtdq, int *qtdp){ // Procura quarto ou pessoa
	
	int i, op, num, cont=0;
	char nom[15];
	
	printf("O que deseja procurar?\nQuarto - 1\nPessoa - 2\n");
	scanf("%i", &op);
	
	switch(op){
		case 1:				// Pesquisa de quarto
			printf("Qual o numero do quarto?\n");
			scanf("%i", &num);
			
			for(i=0; i<*qtdq;i++){
				if(num  == quartos[i].numero){
						if(quartos[i].disponibilidade != 0){
							printf("\n Quarto alugado para %s", quartos[i].cpf);
						}else{
							printf("\n Quarto disponivel. alugar? 1 - Sim, 2 - Nao\n");
							scanf("%i", &num);
							if(num == 1){
								alugar(i , qtdp); // chama a funcao para alugar
							}else{
								return;
							}
					}
				return;
				}
			}
			printf("Nao encontrado!\n");
			return;
			break;
		case 2:				// Pesquisa de Pessoas
			printf("Digite o primeiro nome do procurado\n");
			scanf("%s", &nom);
			printf("\nResultados: (nome e CPF)\n");
			
			for(num=0; num < *qtdp; num++){
				for(i=0; nom[i] != '\0'; i++){
					if(pessoas[num].nome[i] == nom[i]){
						cont++;
					}
				}
				if(cont == i && pessoas[num].ativo == 1){ // Se a pessoa estiver ativa, print nela
					printf("%s", pessoas[num].nome);
					printf("\n%s\n", pessoas[num].cpf);
				}
				cont = 0;
			}
			
					break;
			default:
				printf("\n Invalido ");
				break;
	}
	
	return;
}

