#include<stdio.h>
#include<stdlib.h>

int main(){

	int numFunc,qtdHorTra; double valHorTra,salario;

	scanf("%d",&numFunc);
	scanf("%d",&qtdHorTra);
	scanf("%lf",&valHorTra);

	salario = qtdHorTra*valHorTra;

	printf("NUMBER = %d\n",numFunc);
	printf("SALARY = U$ %.2lf\n",salario);


	return 0;
}