#include<stdio.h>
#include<math.h>

int main(){

    double valor;
    int i;

    scanf("%lf",&valor);

    for(i=2;i<=valor;i=i+2){
        printf("%d^2 = %.0lf\n",i,pow(i,2));
    }

    return 0;
}