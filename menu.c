#include "func.h"
/*
int indP=0; // indice pessoas (Total) -> qtdp
int indQ=0;	// indice quartos (Total) -> qtdq
*/

void txt(); // Prototipo do texto

void menu(){
	folk *pessoas;
	room *quartos; 
	pessoas  = (folk *) malloc(sizeof(folk));
	quartos = (room *) malloc(sizeof(room));
	
	int indP=0; // indice pessoas (Total) -> qtdp
	int indQ=0;	// indice quartos (Total) -> qtdq

	
	

	system("COLOR 0f"); // COR DO TERMINAL
	
	int op=0;
	txt();
	scanf("%i", &op); 
	
	while(1){
		
		printf("Total pessoas: %i || Total Quartos: %i\n", indP, indQ);
		switch(op){
		case 1: // cadastro pessoas
			
			cadP(&indP, pessoas);
			system("cls");
			pessoas = (folk*) realloc(pessoas, sizeof(folk) * (indP+1)); // Realoca a memória para comportar mais um cadastro
			txt();
			scanf("%i", &op);
			system("cls");
			
			break;
		case 2: // Cadastro quartos
		
			system("cls");
			cadQ(&indQ, quartos);
			quartos = (room*) realloc(quartos, sizeof(room) * (indQ+1)); // Realoca a memória para mais um quarto
			txt();
			scanf("%i", &op);
			
			
			break;
			
		case 3: // Procurar
			
			procurar(&indQ, &indP, pessoas, quartos);
			txt();
			scanf("%i", &op);
			system("cls");
			break;
		case 4:  // Listar
			
			listar(&indQ, &indP, pessoas, quartos);
			txt();
			scanf("%i", &op);
			break;
		
		case 5: // Apagar
			
			apagar(&indP, &indQ, pessoas, quartos);
			pessoas = (folk*) realloc(pessoas, sizeof(folk) * (indP+1));
			quartos = (room*) realloc(quartos, sizeof(room) * (indQ+1));
			txt();
			scanf("%i", &op);
			system("cls");
			break;
		case 0: // Sair
		free(quartos); // Libera a memória alocada
		free(pessoas); //- - - - - - - - - - - - -
			return ;
			break;
		default:
			system("cls");
			printf("\nINVALIDO	\n\n");
			system("pause");
			txt();
			scanf("%i", &op);
			break;
		}
	}
}


void txt(){
	printf("	--Menu--\n 1 -> Cadastro de Pessoas. \n 2 -> Cadastros de quartos. \n 3 -> Procurar \n 4 -> listar \n 5 -> Apagar\n 0 -> Sair\n");

	return;
}
