#include<stdio.h>

void conteudoVetor(int vetor[],int tam){
    int i;

    for(i=0;i<tam;i++){

        printf("X[%d] = %d\n",i,vetor[i]);
    }
}

int main(){

    int vetor[10],num,i=0;

    for(i=0;i<10;i++){

        scanf("%d",&num);
        if(num<0 || num==0){

            vetor[i] = 1;
        }else{
            vetor[i] = num;
        }
    }

    conteudoVetor(vetor,10);
    return 0;
}