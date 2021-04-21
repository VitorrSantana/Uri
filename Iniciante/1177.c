#include<stdio.h>

int main(){

    int limite,i, vetor[1000],contador=0;

    scanf("%d",&limite);

    for(i=0;i<1000;i++){

        if(limite==contador){
           
            contador = 0;
        }
        printf("N[%d] = %d\n",i,contador);
        contador++;
    }

    return 0;
}