// Apagar 
#include "func.h"

void apagar(int *qtdp, int *qtdq, folk *pessoas, room *quartos){
	
	int op, num, i, ii;
	char cpf[12];
	
	printf("\nO que deseja apagar: 1 - Pessoa / 2 - Quarto\n");
	scanf("%i", &op);
	
	switch(op){
		case 1: // -------------------------------------- Pessoa-------------------------------------------
			printf("Digite o CPF: ");
			scanf("%s", cpf);
			for(i=0; i<*qtdp; i++){ // Procura o CPF
				if(strcmp(cpf,pessoas[i].cpf) == 0 && qtdp > 0){
					
					strcpy(pessoas[i].nome,pessoas[*qtdp-1].nome); // transfere nome do ultimo pro índice
					strcpy(pessoas[i].cpf,pessoas[*qtdp-1].cpf);
					strcpy(pessoas[i].telefone,pessoas[*qtdp-1].telefone);
					pessoas[i].ativo = pessoas[*qtdp-1].ativo; // termina a transferência
					
					if(pessoas[i].num > 0){ //
						for(ii=0;ii<*qtdq;ii++){
							if(pessoas[i].num == quartos[ii].numero){ // libera o quarto, se tiver algum
								quartos[ii].disponibilidade = 0;			
							}
						}
					}
					pessoas[i].num = pessoas[*qtdp-1].num;  // transfere o numero do quarto do ultimo pro indice
					i = *qtdp; 
					*qtdp -=1; // aloca 1 a menos
					return; // termina a funcao assim que encontrar
				}
			}
			printf("Nao encontrado\n");
			return;
			break;
		case 2: // -------------------------------------- Quarto -------------------------------
			printf("Digite o numero do quarto: ");
			scanf("%i", &num); // Recebe numero do quarto a ser procurado
			for(i=0;i<*qtdq;i++){ // Procura o quarto
				if(num == quartos[i].numero){ // quando achar o quarto
				
					 // inicio das transferencias de dados ( L to I )
					quartos[i].numero = quartos[*qtdq-1].numero;
				//	quartos[i].ind = quartos[*qtdq-1].ind;
					quartos[i].disponibilidade = quartos[*qtdq-1].disponibilidade;
					strcpy(quartos[i].cpf,quartos[*qtdq-1].cpf); // Término das transferencias
					
					i = *qtdq-1;
					*qtdq -=1;	// decrementa o indice de quartos
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

