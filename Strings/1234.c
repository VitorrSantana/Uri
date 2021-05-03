#include <stdio.h>

void sentencaDancante(char frase[]){
    
    int i,aux;
    
    i=0;

    while(frase[i]==' '){
        i++;
    }
    
    if(frase[i]>=97  && frase[i]<=122){
        frase[i] = frase[i] - 32;
    }
    
    i++;
    aux = 1;

    for(;frase[i]!='\0';i++){
            
        if(aux%2==0){
            if(frase[i]>=97  && frase[i]<=122){
                frase[i] = frase[i] - 32;
            }
        }
        else if(frase[i]>=65  && frase[i]<=90){
             frase[i] = frase[i] + 32;
        }
        
        if(frase[i]!=' '){
            aux++;
        }
    }
    
    printf("%s\n",frase);
}

int main() {
 
 
    char frase[52];
    
    while(scanf("%[^\n]%*c", frase)!=EOF){
        sentencaDancante(frase);
    }
    
 
    return 0;
}