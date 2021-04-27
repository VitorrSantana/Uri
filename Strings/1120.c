#include <stdio.h>
#include <string.h>
 
void printa(char final[]){
    int i;
    for(i=0;final[i]!='\0';i++){

        if(final[i]!='X'){
            printf("%c",final[i]);
        }
    }
    printf("\n");
}

int verificaZero(char final[]){
    int i,aux=0;
    if(final[0] != '0'){
        for(i=0;final[i]!='\0';i++){

            if(final[i]!='0'){
                printf("%c",final[i]); 
                aux=1;
            }
        }
    
    }else{
        
        for(i=0;final[i]!='\0';i++){

            if(final[i]=='0'){
                
                final[i] = 'X';
            }else
            {
                printa(final);
                return 0;
            }   
        }

    }
    if(aux==0){
            printf("0\n");
        }else{
            printf("\n");
        }
    return 1;
}

int verificaNumero(char caso1[],char caso2[],char final[]){
    int i,j=0,contemCaso1=0;
    for(i=0;caso2[i]!='\0';i++){

        if(caso2[i]!=caso1[0]){
            final[j] = caso2[i];
            j++;
        }else{
            contemCaso1 =1;
        }
    }
    final[j]='\0';
    if(contemCaso1==1){
        verificaZero(final);
    }else{
        printf("%s\n",final);
    }
}

int main(){
    
    int i;
    char caso1[2],caso2[105],final[105];

    scanf(" %s %s",caso1,caso2);
   
    while(caso1[0]!='0' && caso2[0]!='0'){
        
        verificaNumero(caso1,caso2,final);
        scanf(" %s %s",caso1,caso2);
    }

    return(0);
}