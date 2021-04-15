#include<stdio.h>

void calculo(int menor,int maior){

    int soma=0;
    while (menor<=maior)
    {
       printf("%d ",menor);
       soma = soma + menor;
       menor++;
    }
    
    printf("Sum=%d\n",soma);
}

int main(){

    int m,n,menor,maior,soma=0;
    
    scanf("%d", &m);
    scanf("%d",&n);

    if(m<n){
        menor = m;
        maior = n;
    }
    else if(n<m){
        menor = n;
        maior = m;
    }
    while(menor>0 && maior>0){
    
        calculo(menor,maior);
        scanf("%d", &m);
        scanf("%d",&n);

        if(m<n){
            menor = m;
            maior = n;
        }
        else if(n<m){
            menor = n;
            maior = m;
        }

    }
    return 0;
}