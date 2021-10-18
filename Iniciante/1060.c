#include <stdio.h>
 
int main() {
 
    double num;
    int contador = 0;
    int casosTestes = 6;
    while(casosTestes>0){
        scanf("%lf",&num);
        if(num>0){
            contador++;
        }
        casosTestes--;
    }
    printf("%d valores positivos\n",contador);
 
    return 0;
}