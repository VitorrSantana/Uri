#include<stdio.h>

int main(){
    int X,t,soma=0,i,aux;
   do{
       scanf("%d",&X);
       aux = X;
       if(X!=0){
        while(i<5){
            if(aux%2==0){
                soma = soma + aux;
                i++;
            }
            aux++;
        }
        printf("%d\n",soma);
        soma =0;
        i=0;
      }
      
    }while(X!=0);
    
return 0;
}