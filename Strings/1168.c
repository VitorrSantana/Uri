#include <stdio.h>

int quantidadeLeds(char valores[]){
    
    int i,valor,soma;
    soma = 0;
    
    for(i=0;valores[i]!='\0';i++){
        valor = valores[i] - '0'; 
    
        switch(valor){
            case 1:
                soma = soma + 2;
                break;
            case 2:
                soma = soma + 5;
                break;
            case 3:
                soma = soma + 5;
                break;
            case 4:
                soma = soma + 4;
                break;
            case 5:
                soma = soma + 5;
                break;
            case 6:
                soma = soma + 6;
                break;
            case 7:
                soma = soma + 3;
                break;
            case 8: 
                soma = soma + 7;
                break;
            case 9:
                soma = soma + 6;
                break;
            case 0:
                soma = soma + 6;
                break;
        }
    }
    return soma;
} 
 

int main() {
 
    int casosTeste,i;
    char valores[102];
    scanf("%d",&casosTeste);
    
    while(casosTeste>0){
        
        scanf("%s",valores);
        printf("%d leds\n",quantidadeLeds(valores));
        
        casosTeste--;
    }
 
    return 0;
}