#include <stdio.h>
 
void encontraMenor(int vetor[],int tamVetor){

    int i,posicao,menor;
    menor = vetor[0];
   
    for(i=0;i<tamVetor-1;i++){

        if(menor>vetor[i+1]){
          
            menor = vetor[i+1];
            posicao = i+1;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n",menor,posicao);

}


int main(){

    int tamVetor;
    int i=0;
    //Usuario digita tamanho do Vetor
    scanf("%d",&tamVetor);
    int vetor[tamVetor];

    for ( i = 0; i < tamVetor; i++)
    {
        scanf("%d",&vetor[i]);     
    }
    encontraMenor(vetor,tamVetor);

    return 0;
}