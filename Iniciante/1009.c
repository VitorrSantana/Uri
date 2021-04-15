#include<stdio.h>
#include<stdlib.h>

int main(){

	double montateTot,salFix,salario;char nomeFunc[50]; 

	scanf("%s",nomeFunc);
	scanf("%lf",&salFix);
	scanf("%lf",&montateTot);

	salario = salFix+(montateTot*0.15);

	
	printf("TOTAL = R$ %.2lf\n",salario);


	return 0;
}