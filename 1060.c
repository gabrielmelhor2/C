#include<stdlib.h>
#include<stdio.h>

int main()
{
	float num,cont,positivos,negativos;
	int resp;
	
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

  	  	  }while (cont < 10);
	    	
 			
	    	printf("\nPositivos: %2.f",positivos);
	    	printf("\nNegativos: %2.f",negativos);
    	return 0;
}
