#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{
	int chute_player1,chute_player2;
	int n_tentativa;
	
    n_tentativa = 1;
	
	printf("\t********* JOGO DA ADVINHACAO *********\n");
	printf("\n\t[PLAYER 1] ");
    printf("\n\tEscolha Um Numero: ");
    scanf("%d",&chute_player1);
    
		system("cls");
	
	do
	{
		
	    
	      
		printf("\n\t[PLAYER 2] \n");
		printf("\n\tDigite o Numero: ");
		scanf("%d",&chute_player2);
		
			if (chute_player2 > chute_player1)
			{
				printf("\n\tO CHUTE FOI ALTO !!!\n");
			}else if(chute_player2 < chute_player1){
				printf("\n\tO CHUTE FOI BAIXO !!!\n");
				n_tentativa++;
			}else if(chute_player2 == chute_player1){
				printf("\n\tACERTOU O CHUTE !!! \n");
				break;
			}
			
	}while(chute_player2 != chute_player1);	
	
	printf("\n\tNUMERO DE TENTATIVA NECESSARIAS PARA ACERTO: %d\n" , n_tentativa);
	

	return 0;
}