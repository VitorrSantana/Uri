#include <stdio.h>
 
void original (char criptografada[],int posDeslocada){
    int i,soma=0;
    
    if(posDeslocada!=0){
        for(i=0;criptografada[i]!='\0';i++){
            
            soma = criptografada[i]-posDeslocada; 
            if(soma<65){
                soma = 65 - soma; 
                printf("%c",(91-soma));
            }else{
                printf("%c",soma);
            }
        }
        printf("\n");
    }else{
        printf("%s\n",criptografada);
    }
} 
 
 
int main() {
 
    int qtdCasosTeste,posDeslocada;
    char criptografada[55];
    
    
    scanf("%d ",&qtdCasosTeste);
    
    while(qtdCasosTeste>0){
        
      scanf("%s",criptografada);
      scanf("%d",&posDeslocada);
      original(criptografada,posDeslocada);

        
        
        qtdCasosTeste--;
    }
    
    return 0;
}