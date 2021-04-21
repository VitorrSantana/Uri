#include<stdio.h>

void conta(int x){

    int i = 1;
    while(x>=i){

        if(i<x){
            printf("%d ",i);
        }else{
            printf("%d",i);
        }
        i++;
    }
}

int main(){

    int x;
    
    scanf("%d",&x);
    
    while(x!=0){

        conta(x);
        printf("\n");
        scanf("%d",&x);
    }
 
    return 0;
}