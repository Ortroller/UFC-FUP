#include "func.h"

void procurar(int *qtdq, int *qtdp, folk *pessoas, room *quartos){ // Procura quarto ou pessoa
	
	int i,ii , op, num, cont=0, qtdgente=0;
	char nom[30];
	
	printf("O que deseja procurar?\nQuarto - 1\nPessoa - 2\n");
	scanf("%i", &op);
	
	switch(op){
		case 1: // ---------------------------------------------------- Pesquisa de quarto-----------------------------------
			printf("Qual o numero do quarto?\n");
			scanf("%i", &num);
			
			for(i=0; i<*qtdq;i++){
			//	printf("\n\n ----- \n\n");
				if(num == quartos[i].numero){
						if(quartos[i].disponibilidade == 1){
								for(ii=0; ii<*qtdp; ii++){
								if(strcmp(quartos[i].cpf, pessoas[ii].cpf) == 0){
								printf("\n Quarto alugado para: %s CPF: %s\n", pessoas[ii].nome ,quartos[i].cpf);	
								 i = *qtdq-1;
								 return;
									}
								}
				}else{
					printf("\n Quarto disponivel. alugar? 1 - Sim, 2 - Nao\n");
					scanf("%i", &num);
					if(num == 1){
						alugar(i , qtdp, qtdq, pessoas, quartos); // chama a funcao para alugar
						return;
						}else{
							return;
						}
					}
				}
			}
			printf("Nao encontrado!\n");
			return;
			break;
		case 2:				// -----------------Pesquisa de Pessoas
			printf("Digite o nome do procurado\n");
			scanf(" %[^\n]", &nom);
			printf("\nResultados: (nome e CPF)\n\n");
			
			for(num=0; num < *qtdp; num++){ // percorre o vetor de pessoas
				for(i=0; nom[i] != '\0'; i++){
					if(toupper(pessoas[num].nome[i])== toupper(nom[i])){
						cont++;
					}
				}
				if(cont == i && pessoas[num].ativo == 1){ // Se a pessoa estiver ativa, print nela
					printf("	%s", pessoas[num].nome);
					printf("\nCPF: %s\n", pessoas[num].cpf);
					printf("Telefone %s\n\n", pessoas[num].telefone);
					qtdgente++;
				}
				cont = 0;
			}
			printf("		total: %i\n\n\n", qtdgente);
			system("pause");
			system("cls");
					break;
			default:
				printf("\n Invalido ");
				break;
	}
	
	return;
}

