#include <stdio.h>
#include<string.h>

void retiraEspacoBrancoENumeros(char texto[]){
    int i,j=0;

    for(i=0;texto[i]!='\0';i++){

        if(texto[i]!=' ' && ((texto[i]>=65 && texto[i]<=90) || (texto[i]>=90 && texto[i]<=122))){
            texto[j] = texto[i];
            j++;
        }
    }
    texto[j] = '\0';
}

void tudoMinusculo(char texto[]){

    int i;
    for(i=0;texto[i]!='\0';i++){
        if(texto[i]>=65 && texto[i]<=90){
            texto[i] = texto[i]+32;
        }
    }
}

void ordemAlfabetica(char texto[]){

    int i,j,aux;

    for(i=0;texto[i]!='\0';i++){
        for(j=0;texto[j]!='\0';j++){
            if(texto[i]>=90 && texto[i]<=122){
                if(texto[j]>texto[i]){
                    aux = texto[i];
                    texto[i] = texto[j];
                    texto[j] = aux;
                }
            }
        }
    }  
}

int confere(char analisar,char texto[],int valorMaior){

    int j,contador=0;

    for(j=0;texto[j]!='\0';j++){

        if(analisar==texto[j]){
            contador++;
        }
    }

    if(contador==valorMaior){
        return 1;
    }
    return 0;
} 


int contaMaior(char texto[]){
    
    int i,j,contador=0,maior=0;
    char alfabeto[26];
    char posMaior;

    for(i=0;texto[i]!='\0';i++){
        for(j=0;texto[j]!='\0';j++){
            
            if(texto[j]==texto[i]){
                contador++;
            } 
        }
        if(contador>maior){
            maior = contador;
            posMaior = texto[i];
        }
        contador =0;
    }
    int verificou =0,k;
    alfabeto[0] = posMaior;
    alfabeto[1] = '\0';
   
    for(i=0;texto[i]!='\0';i++){
        for(k=0;alfabeto[k]!='\0';k++){
            if(alfabeto[k]==texto[i]){
                verificou =1;
            }
        }
        //printf("-%d",k);
        if(verificou==0){
            if(confere(texto[i],texto,maior)==1){
                alfabeto[k] = texto[i];
                k++;
                alfabeto[k] ='\0';
            }
        }
        verificou =0;
    }
    printf("%s\n",alfabeto);
}

int main(){
    
    int qtdCasosTeste;
    char texto[205];
    
    scanf("%d ",&qtdCasosTeste);
    
    
    char final[strlen(texto)];

    while(qtdCasosTeste>0){

        gets(texto);
        retiraEspacoBrancoENumeros(texto);
        //printf("%s\n",texto);
        tudoMinusculo(texto);
        ordemAlfabetica(texto);
        contaMaior(texto);

        qtdCasosTeste--;
    }

    return 0;

}

