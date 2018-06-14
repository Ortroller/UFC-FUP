#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Structs.h"

void menu();

void cadP(int *qtdp, folk *pessoas);

void cadQ(int *qtdq, room *quartos);

void procurar(int *qtdq, int *qtdp, folk *pessoas, room *quartos);

void listar(int *qtdq, int *qtdp, folk *pessoas, room *quartos);

void apagar(int *qtdp, int *qtdq, folk *pessoas, room *quartos);  

void alugar(int ind, int *qtdp,int *qtdq, folk *pessoas , room *quartos);

