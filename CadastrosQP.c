#include "func.h"
//strcmp strcpy



void cadP(int *qtdp, folk *pessoas){ // chamada para cadastro de pessoas 
	int i, local=0;
	char cpy[12], nom[30];
	getchar();
	printf("Digite o nome cliente:");
	scanf(" %[^\n]", nom);
	printf("Informe o CPF:");
	scanf(" %s", cpy);
	
	for(i=0; i < *qtdp; i++){ // Verifica se CPF já existe 
		if(strcmp(cpy, pessoas[i].cpf) == 0){
			printf("CPF REPETIDO!");
			return; // encerra a função para não atribuir valores errados
		}
		if(pessoas[i].ativo == 0){ // Recorda o local a ser substituido
			local = i;
		}else if(local == 0){
			local = *qtdp;
		}
	}
	
	*qtdp +=1; // incrementa a quantidade de quartos total
	strcpy(pessoas[local].nome, nom); // atribui o nome à pessoa
	strcpy(pessoas[local].cpf, cpy);	// Atribui o CPF à pessoa
	pessoas[local].num=0;
	pessoas[local].ativo = 1;
	
	return;
}

void cadQ(int *qtdq, room *quartos){ // chamada para cadastro de quartos (qtdq = &indQ)
	int num,i, local;
	printf("Informe o numero do novo quarto:");
	scanf("%i", &num);

	for(i=0; i<*qtdq;i++){ // verifica se há um quarto com mesmo numero
		if(quartos[i].atv == 0){
			i  = *qtdq;
			local = i;
			*qtdq -=1; // anulará o incremento 
		}else{
			local = *qtdq;
		}
		
		if(num == quartos[i].numero){
			printf("Quarto existente!\n");
			return;
		}
	}
	
	*qtdq +=1;
	quartos[local].numero = num;
	quartos[local].disponibilidade = 0;
	quartos[local].cpf;
	quartos[local].atv = 1;
	
	return;
}


