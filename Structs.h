typedef struct{

	char nome[30];
	char cpf[12];	
	int num;
	int ativo; // se sobreescreve ou nao

}folk;

typedef struct{
	
	int numero, ind;
	int disponibilidade;
	char cpf[12];
	int atv;
	
}room;

folk pessoas[100]; // Vetor da struct de pessoas 
room quartos [50]; // Vetor da struct de quartos

/*
extern int indP;
extern int indQ;
*/
