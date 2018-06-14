#include "func.h"

void apagar(int *qtdp, int *qtdq, folk *pessoas, room *quartos){ // Muda o status "ativo"

	int op, num, i, ii;
	char cpf[12];
	
	printf("\nO que deseja apagar: 1 - Pessoa / 2 - Quarto\n");
	scanf("%i", &op);
	
	switch(op){
		case 1: // Pessoa
			printf("Digite o CPF: ");
			scanf("%s", cpf);
			for(i=0; i<*qtdp; i++){ // Procura o CPF
				if(strcmp(cpf,pessoas[i].cpf) == 0 && qtdp > 0){
					pessoas[i].ativo = 0 ;
					if(pessoas[i].num > 0){
						for(ii=0;ii<*qtdq;ii++){
							if(pessoas[i].num == quartos[ii].numero){ // libera o quarto, se tiver algum
								quartos[ii].disponibilidade = 0;
								quartos[ii].cpf[0] = '\n';
							}
						}	
					}
					i = *qtdp; 
					return; // termina a funcao assim que encontrar
				}
			}
			printf("Nao encontrado\n");
			return;
			break;
		case 2: // apaga quarto
			printf("Digite o numero do quarto: ");
			scanf("%i", &num);
			for(i=0;i<*qtdq;i++){ // Procura o quarto
				if(num == quartos[i].numero){
					quartos[i].atv = 0;
					i = *qtdq;
					return ;
				}
			}
			printf("Inexistente\n");
			return;
			break;
			default:
				printf("Invalido");
				break;
	}
	return; 
}
