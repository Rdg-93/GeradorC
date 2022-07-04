#include <stdio.h>
#include <conio.h>

void main(){

  FILE *arq;
  int i;
  int result;

  clrscr();
  arq = fopen("ArqGrav.txt", "wt");  // Cria um arquivo texto para gravação

  if (arq == NULL) // Se nào conseguiu criar
  {
     printf("Problemas na CRIACAO do arquivo\n");
     return;
  }

  for (i = 11911111111; i<1199999999;i++)
  {
// A funcao 'fprintf' devolve o número de bytes gravados 
// ou EOF se houve erro na gravação
      result = fprintf(arq,i);  					  
      if (result == EOF)		    
	  printf("Erro na Gravacao\n");
  }
  fclose(arq);
}
