#include<stdlib.h>
#include<stdio.h>

int main()
{
	int num,cont,positivos,negativos;

	cont = 0;
	positivos = 0;
	negativos = 0;

		do{
	    	printf("Digite Um Numero: ");
	    	scanf("%d",&num);

		    	if(num>0)
		    	{
		    	   positivos++;
				}else{
					negativos++;
				}
				cont++;

  	  	  }while (cont < 6);


	    	printf("\nQuantidade de Numeros Positivos: %d", positivos);


    	return 0;
}
