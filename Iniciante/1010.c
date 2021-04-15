#include <stdio.h>
 
int main() {
 
    int cod1,numP1,cod2,numP2;
    double valUni1,valUni2,total;
    
    scanf("%d %d %lf",&cod1,&numP1,&valUni1);
    scanf("%d %d %lf",&cod2,&numP2,&valUni2);
    
    total = (numP1*valUni1) + (numP2*valUni2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    
 
    return 0;
}