#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ntestes, contador, numero, i, contador2=0;
	scanf("%d", &ntestes);
	for(contador = 1; contador <= ntestes; contador++)
	{
		scanf("%d", &numero);
		for(i=1; i<=numero;i++)
		{
			if(numero%i == 0){
				contador2++;
            }
		}
        if(contador2 == 2){
            printf("%d eh primo\n", numero);
            contador2 = 0;
        }

        else
        {   printf("%d nao eh primo\n", numero);
            numero = numero*0;
            contador2 = 0;
        }
    }
    return 0;
}