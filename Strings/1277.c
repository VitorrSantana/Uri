#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

	char nome[53];
	char registro[103];

}Aluno;

void nomes(Aluno *vet,int tam,char *nom){

	int i;
	char *aux;

	aux = strtok(nom," ");
	for(i=0;aux!=NULL;i++){

		strcpy(vet[i].nome,aux);
		aux = strtok(NULL," ");
	}
}
void registros(Aluno *vet,char *reg){

	int i;
	char *aux;

	aux = strtok(reg," ");
	for(i=0;aux!=NULL;i++){

		strcpy(vet[i].registro,aux);
		aux = strtok(NULL," ");
	}
}

void confereF(Aluno *vet,int tam){

	int i,j,qtdF;
	double tamR,cont=0;
    char **nomesF;
    qtdF = 0;

    nomesF = malloc(sizeof(char *)*0);

	for(i=0;i<tam;i++){

		tamR = strlen(vet[i].registro);
		for(j=0;vet[i].registro[j]!='\0';j++){

			if(vet[i].registro[j] == 'M'){
				tamR--;
			}
			if(vet[i].registro[j] == 'P'){
				cont++;
			}
		}

		tamR*=0.75;
		if(tamR>cont){
      
            nomesF = realloc(nomesF,(sizeof(char*)*qtdF+1));
            nomesF[qtdF] = malloc(sizeof(char)*53);
            strcpy(nomesF[qtdF],vet[i].nome);
            qtdF++;
		}

		cont =0;
	}
  
    i=0;
    while(i<qtdF){

        if(i+1 == qtdF){
        printf("%s",nomesF[i]);
        }else{
        printf("%s ",nomesF[i]);
        }
        i++;
    }
    printf("\n");
}

int main(){
	
	int num,est,i=0;
	char nom[5003],reg[10300];

	scanf("%d",&num);
    getchar();
	while(num>i){

		scanf("%d",&est);
		getchar();

		Aluno vet[est];

		gets(nom);
		nomes(vet,est,nom);

		gets(reg);
		registros(vet,reg);
		
		confereF(vet,est);
		
		i++;
	}

    return 0;
}