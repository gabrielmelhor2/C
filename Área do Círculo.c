#include <stdlib.h>
#include <stdio.h>

//Calcular a �rea de uma circunfer�ncia

int main()
{
	float A,pi,raio;

    pi = 3.14159;
    
	printf("Digite o Raio do Circulo: ");
	scanf("%f",&raio);
	
    raio = raio * raio;
	
	A = pi * raio;
	
	printf("Circunferencia: %.4f " , A);

	return 0;
}
