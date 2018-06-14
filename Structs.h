typedef struct{

	char nome[30];
	char cpf[12];	
	int num; // Aqui fica o numero do quarto, se ele tiver alugado algum
	char telefone[20];
	int ativo; // se sobreescreve ou nao
	
}folk;

typedef struct{
	
	int numero;
	int disponibilidade;
	char cpf[12]; // do locatario
	
}room;


