#include <stdio.h>

int main(){
	int N, somasq=0, a=0, b=1, i;
	scanf("%d", &N);

if (N==1){
	printf("0");
}
if (N==2){
	printf("0 1");
}
if (N>2){

printf ("0 1 ");

		for (i=0; i<N-2 ;i++){
			somasq= a + b;
			a=b;
			b=somasq;
			if (i==N-3){
			printf("%d", somasq );
			}
			else{
			
			printf("%d ", somasq);}
					
							}
		
    printf("\n");
}
	return 0;
}