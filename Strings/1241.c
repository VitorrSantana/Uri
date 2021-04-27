#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int confereEncaixe(char *A, char *B){

	int tam1,tam2,i;
		
	tam1 = strlen(A); tam2 = strlen(B);
	
	if(tam2>tam1){
	
		return 0;	
	}

	for(i=tam2;i>=0;i--){
		
			if(A[tam1]!=B[i]){
				
				return 0;
			}
			tam1--;
	}

	return 1;
}

int main(){

	char A[1001],B[1001]; int N,i=0;

	//printf("\nDigite a quantidade de casos teste: ");
	scanf("%d",&N);
	
	while(i<N){

		//printf("Digite o valor de A: ");
		scanf("%s",A);

		//printf("Digite o valor de B: ");
		scanf("%s",B);
		
		if(confereEncaixe(A,B)==1){
			printf("encaixa\n");
		}
		else{
			printf("nao encaixa\n");
		}

		i++;
	}

    return 0;
}