#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void tudoMinusculo(char texto[]){

    int i;
    for(i=0;texto[i]!='\0';i++){
        if(texto[i]>=65 && texto[i]<=90){
            texto[i] = texto[i]+32;
        }
    }
}
int proximaPos(char texto[],int pos){
  int i;
  for(i=pos;texto[i]!='\0';i++){
    
    if(texto[i]==' '){
      return i;
    }
  }

  return strlen(texto)-1;
}

int main(){

  char texto[6000],posAnt;
  int i,posEsp,aliteracao =0;

  while(scanf(" %[^\n]",texto) != EOF){

    tudoMinusculo(texto);
    aliteracao =0;
    posAnt ='0';
    
    for(i=0;texto[i]!='\0';i++){
      posEsp = proximaPos(texto, i);
      if(texto[i]== texto[posEsp+1]){
        if(texto[i]!=posAnt){
          aliteracao++;
        }
        posAnt = texto[posEsp+1];//t-r
      }else{
        posAnt ='0';
      }  

      i = posEsp;
    }
      
    printf("%d\n",aliteracao);
  }

  return 0;  
}