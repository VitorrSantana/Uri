#include<stdio.h>

int main(){

    int N ,i=0,valorTeste,valDIntervalo = 0, valFIntervalo = 0;

    scanf("%d",&N);//4

    /*
        4
        14
        123
        10
        -25
    */
    while(i<N){//0<4//1<4

        scanf("%d",&valorTeste);//14//123//10//-25
    
        if(valorTeste>=10 && valorTeste<=20){
            valDIntervalo ++;//1//2
        }else{
            valFIntervalo ++;//1//2
        }

       i ++;
    }

    printf("%d in\n",valDIntervalo);
    printf("%d out\n",valFIntervalo);

    return 0;

}
