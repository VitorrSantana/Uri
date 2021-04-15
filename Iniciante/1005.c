#include <stdio.h>
 
int main() {
 
    double num1,num2;
    scanf("%lf %lf", &num1,&num2);
    
    printf("MEDIA = %.5lf\n",((num1 * 3.5) + (num2 * 7.5)) / 11);
    
    return 0;
}