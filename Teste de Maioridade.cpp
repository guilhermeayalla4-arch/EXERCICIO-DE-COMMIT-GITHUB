#include <stdio.h>

int main(){
	int opcao, idade;
	char nome[15];
	
	do{
		printf("Informe seu nome: ");
		scanf("%s", &nome);
		
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		
		printf(nome);
		if(idade >= 18){
			printf("\nVoce e di Maior!");
		} else if(idade > 0 and idade < 18){
			printf("\nVoce e um Meno");
		} else{
			printf("\nToma vergonha, nem nasceu ainda!");
		}
		printf("\n===== OPCOES =====\n1 - Verificar novamente\n0 - Sair\nR: ");
		scanf("%d", &opcao);
	}while(opcao != 0);
	return 0;
}

