#include<stdio.h>
#include<string.h>

int verificaSubSeq(char sequencia[], char subSequencia[]){

    int i,aux,j,contador;

    for(i=0;sequencia[i]!='\0';i++){

        if(sequencia[i]== subSequencia[0]){
           contador = 1;
            aux = i+1;
            for(j=1;subSequencia[j]!='\0';j++){
                
                if(sequencia[aux]==subSequencia[j]){
                    aux++;
                }
                else{

                    while(sequencia[aux]!=subSequencia[j] && sequencia[aux]!='\0'){
                        aux++;  
                    }
                    aux++;
                    
                }
                
                //Garante que a ultima letra não seja a necessaria para ser uma subsequencia
                if(sequencia[aux]=='\0' && sequencia[aux-1]!=subSequencia[j]){
                    break;
                }   
            }
            
            if(strlen(subSequencia) == j){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int qtdCasosT,qtdSubSeq;
    char sequencia[100005], subSequencia[105];

    scanf("%d",&qtdCasosT);

    while(qtdCasosT>0){
        
        scanf("%s",sequencia);
        scanf("%d",&qtdSubSeq);
        
        while(qtdSubSeq>0){
            
            scanf("%s",subSequencia);
           
            if(verificaSubSeq(sequencia,subSequencia)==1){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
            qtdSubSeq--;
        }

        qtdCasosT--;
    }

    return 0;

}