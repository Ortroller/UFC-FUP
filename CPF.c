#include <stdio.h>  
  /*
int main()  
{  

char cpf[12];  
int icpf[12];  
int i,somador=0,digito1,result1,result2,digito2,valor;  
  
printf("Digite o cpf: ");  
scanf(" %s",cpf);  
  
//Efetua a conversao de array de char para um array de int.  
for(i=0;i<11;i++)  
{  
icpf[i]=cpf[i]-48;  
}  
  
//PRIMEIRO DIGITO.  
  
for(i=0;i<9;i++)  
{  
somador+=icpf[i]*(10-i);  
}  
  
result1=somador%11;  
  
if( (result1==0) || (result1==1) )  
{  
digito1=0;  
}  
  
else  
{  
digito1 = 11-result1;  
}  
  
//SEGUNDO DIGITO.  
  
somador=0;  
  
for(i=0;i<10;i++)  
{  
somador+=icpf[i]*(11-i);  
}  
  
valor=(somador/11)*11;  
result2=somador-valor;  
  
if( (result2==0) || (result2==1) )  
{  
digito2=0;  
}  
  
else  
{  
digito2=11-result2;  
}  
  
//RESULTADOS DA VALIDACAO.  
  
if((digito1==icpf[9]) && (digito2==icpf[10]))  
{  
printf("\nCPF VALIDADO.\n");  
}  
else  
{  
printf("Problema com os digitos.\n");  
}  
return 0;  
}  
*/
