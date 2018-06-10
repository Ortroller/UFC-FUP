#include "func.h"

void txt(); // Prototipo do texto

void menu(){
	
	folk *pessoas; // Vetor da struct de pessoas 
	room *quartos; // Vetor da struct de quartos
	
	int indP=0; // indice pessoas (Total) -> qtdp
	int indQ=0;	// indice quartos (Total) -> qtdq
	
	pessoas  = (folk *) malloc((indP+1) * sizeof(folk));
	quartos = (room *) malloc((indQ+1) * sizeof(room));

	system("COLOR 3"); // COR DO TERMINAL
	
	int op=0;
	txt();
	scanf("%i", &op); 
	
	while(1){
		switch(op){
		case 1: // cadastro pessoas
			
			cadP(&indP, pessoas);
			system("cls");
			pessoas = (folk*) realloc(pessoas, sizeof(folk) * (indP + 1)); // Realoca a memória para comportar mais um cadastro
			txt();
			scanf("%i", &op);
			system("cls");
			
			break;
		case 2: // Cadastro quartos
		
			system("cls");
			cadQ(&indQ, quartos);
			quartos = (room*) realloc(quartos, (sizeof(room) * (indQ+1))); // Realoca a memória para mais um quarto
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
			txt();
			scanf("%i", &op);
			system("cls");
			break;
		case 0: // Sair
			return ;
			break;
		default:
			system("cls");
			printf("INVALIDO - %i || %i\n", indP, indQ);
			system("pause");
			menu();
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
