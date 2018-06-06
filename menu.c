#include "func.h"

void txt();



void menu(){
	
	int indP=0; // indice pessoas (Total) -> qtdp
	int indQ=0;	// indice quartos (Total) -> qtdq

	system("COLOR 4");
	
	int op=0, number;
	txt();
	scanf("%i", &op);
	
	while(1){
		switch(op){
		case 1: // cadastro pessoas
			
			cadP(&indP);
			system("cls");
			txt();
			scanf("%i", &op);
			system("cls");
			
			break;
		case 2: // Cadastro quartos
		
			system("cls");
			cadQ(&indQ);
			txt();
			scanf("%i", &op);
			
			
			break;
			
		case 3: // Procurar
			
			procurar(&indQ, &indP);
			txt();
			scanf("%i", &op);
			system("cls");
			break;
		case 4:  // Listar
			
			listar(&indQ, &indP);
			txt();
			scanf("%i", &op);
			break;
		
		case 5: // Apagar
			
			apagar(&indP, &indQ);
			txt();
			scanf("%i", &op);
			system("cls");
			break;
		case 0: // Sair
			return ;
			break;
		default:
			
			printf("INVALIDO - %i || %i", indP, indQ);
			scanf("%i", &op);
			break;
		}
	}
}


void txt(){
	printf("	--Menu--\n 1 -> Cadastro de Pessoas. \n 2 -> Cadastros de quartos. \n 3 -> Procurar \n 4 -> listar \n 5 -> Apagar\n 0 -> Sair\n");
//	printf("Total pessoas: %i || Total Quartos: %i\n");
	return;
}
