#include <stdio.h>
 
int main() {
 
    float a,b,c,resultado;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    resultado = ((a*2) + (b*3) + (c*5))/10;
    
    printf("MEDIA = %.1f\n",resultado);
    
    return 0;
}