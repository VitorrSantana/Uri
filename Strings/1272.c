#include <stdio.h>
#include<string.h>
 
int proximaPos(char texto[],int pos){
    int i;
    for(i=pos;texto[i]!='\0';i++){
    
        if(texto[i]!=' '){
          return i;
        }
    }
    return strlen(texto)-1;
}

void preenche(char *texto){
  int i;
  for(i=0;texto[i]!='\n';i++){

    scanf("%c",&texto[i]);
    if(texto[i]=='\n'){
      break;
    }
  }
  texto[i] ='\0';
  //printf("%s\n",texto);

}

int main() {
 
    char texto[100];
    int casosTeste,i;
    scanf("%d ",&casosTeste);


    while(casosTeste>0){
        //scanf(" %[^\n]s", texto);
        preenche(texto);
        if(texto[0] != ' '){
            printf("%c",texto[0]);
        }
        for(i=0;texto[i]!='\0';i++){
            if(texto[i]==' '){
              i= proximaPos(texto,i);
              if(texto[i]!=' '){
              printf("%c",texto[i]);}
            }
        }
        printf("\n");
        casosTeste--;
   }
 
    return 0;
}