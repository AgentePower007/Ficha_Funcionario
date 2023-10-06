#include <stdio.h>
#include <stdlib.h>


struct funcionario{
	
	 char nome[20];
	 char genero[20];
	 char setor[20];
	 int idade[20];
	 
};
int main() {
	
  int i;
	struct funcionario ficha[5];
		for(i=0;i<5;i++){
		
		
		printf("\n================================== FICHA DO FUNCIONARIO %d ==================================",i+1);
		
		printf("\nDigite o nome do funcionario:");
		gets(ficha[i].nome);
		
		printf("\nDigite o genero do funcionario:");
		gets(ficha[i].genero);
		
		printf("\nDigite a idade do funcionario:");
		gets(ficha[i].idade);
		
		printf("\nDigite o setor do funcionario:");
		gets(ficha[i].setor);
		
}
		return 0;
}
