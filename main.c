#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dias = 0, anos = 0, meses = 0;
	
	selocale(LC_ALL, "Portuguese");
    printf("Informe a quantidade de dias: \n");
    scanf("%d", &dias);
    
    anos = dias /365;
			   
    
    printf("em anos: %d", anos);
    return 0;
}