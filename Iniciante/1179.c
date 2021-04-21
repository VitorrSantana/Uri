#include<stdio.h>
#include<stdlib.h>

void imprimir1(int *v1, int tam){

	int i;

	for(i=0;i<tam;i++){

		printf("par[%d] = %d\n",i,v1[i]);
	}
}

void imprimir2(int *v2, int tam){

	int i;

	for(i=0;i<tam;i++){

		printf("impar[%d] = %d\n",i,v2[i]);
	}
}

int main(){

	int v1[5],v2[5],num,i=0,c1=0,c2=0;

	while(i<15){

		scanf("%d",& num);

		if(c1==5){

			imprimir1(v1,c1);
			c1=0;
		}
		if(c2==5){

			imprimir2(v2,c2);
			c2=0;
		}

		if(num%2==0){

			v1[c1] = num;
			c1++;
		}
		else{

			v2[c2] = num;
			c2++;
		}
		
		i++;
	}

	imprimir2(v2,c2);
	imprimir1(v1,c1);
	
	return 0;

}