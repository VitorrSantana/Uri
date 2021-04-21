#include<stdio.h>

#define linha 2
#define coluna 2

void lerMatriz(double matriz[][coluna]){
    
    int i,j;
    
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            scanf("%lf",&matriz[i][j]);
        }
    }
}

double soma_media(double matriz[][coluna],int linSom){

    int j;
    double soma;
    
    soma = 0;

    for(j=0;j<coluna;j++){
        soma = soma + matriz[linSom][j];
    }

    return soma;
}

int main(){

    double matriz[linha][coluna];
    int linSom;
    char opcao;

    scanf("%d",&linSom);
    scanf(" %c",&opcao);

    lerMatriz(matriz);

    if(opcao == 'S'){
        printf("%.1lf\n",soma_media(matriz,linSom));
    }
    else{
        printf("%.1lf\n",soma_media(matriz,linSom)/linha);
    }

    return 0;

}