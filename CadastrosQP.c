#include "func.h"
//strcmp strcpy



void cadP(int *qtdp, folk *pessoas){ // chamada para cadastro de pessoas 
	int i, local=0;
	char cpy[12], nom[30];
	printf("Digite o nome cliente: ");
	scanf(" %[^\n]", nom);
	printf("Informe o CPF: ");
	scanf(" %s", cpy);
	for(i=0; i < *qtdp; i++){ // Verifica se CPF já existe 
		if(strcmp(cpy, pessoas[i].cpf) == 0){
			printf("CPF REPETIDO!\n");
			system("Pause"); // PAUSA
			return; // encerra a função para não atribuir valores errados
		}
		if(pessoas[i].ativo == 0){ // Recorda o local a ser substituido
			local = i;
			i = *qtdp;
		}else{ 
			local = *qtdp;
		}
	}
	
	printf("Informe o telefone formato (XX)Xxxxxxxxx: ");
	scanf(" %s", &pessoas[local].telefone);
	strcpy(pessoas[local].nome, nom); // atribui o nome à pessoa
	strcpy(pessoas[local].cpf, cpy);	// Atribui o CPF à pessoa
	pessoas[local].num = 0;
	pessoas[local].ativo = 1;
	*qtdp +=1; // incrementa a quantidade de quartos total (indQ)
	
	return;
}

void cadQ(int *qtdq, room *quartos){ // chamada para cadastro de quartos (qtdq = &indQ)
	int num,i, local=0;
	printf("Informe o numero do novo quarto:");
	scanf(" %i", &num);

	for(i=0; i<*qtdq;i++){ // verifica se há um quarto com mesmo numero
		if(num == quartos[i].numero ){
			printf("Quarto existente!\n");
			return;
		}
	}
	quartos[*qtdq].numero = num;
	quartos[*qtdq].disponibilidade = 0;
//	quartos[local].atv = 1;
	*qtdq +=1;
	return;
}


