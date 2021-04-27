#include <stdio.h>
#include <string.h>
 
void primeiraPassada(char criptografada[]){
    
    int i;
    for(i=0;criptografada[i]!='\0';i++){
        if((criptografada[i] >= 65 && criptografada[i] <= 90) || (criptografada[i]>=97 && criptografada[i] <= 122)){
    
            criptografada[i] +=3; 
        }
    }
    //printf("%s\n",criptografada);
 }
 void segundaPassada(char criptografada[]){
    
    int i,limite,tam = strlen(criptografada);
    char aux;
    if(tam%2==0){
        limite = tam/2;
    }else{
        limite = (tam/2)+1;
    }
    for(i=0;i<limite;i++){

        aux = criptografada[i];
        criptografada[i] = criptografada[tam-1];
        criptografada[tam-1] = aux;
        tam--;
    }
   // printf("%s\n",criptografada);
}

void terceiraPassada(char criptografada[]){
    
    int i,tam = strlen(criptografada);
    //printf("%d",tam);
    for(i=(tam/2);criptografada[i]!='\0';i++){
        //printf("%c-",criptografada[i]);
      criptografada[i]--;
    }
    //printf("%s\n",criptografada);
 }

int main(){
    
    int qtdCasosTeste,i;
    char criptografada[1010];

    scanf("%d",&qtdCasosTeste);
    getchar();

    for(i=0;i<qtdCasosTeste;i++){

       //scanf("%s ",criptografada);
       gets(criptografada);
       primeiraPassada(criptografada);
       segundaPassada(criptografada);
       terceiraPassada(criptografada);
       printf("%s\n",criptografada);
    }

    return(0);
}