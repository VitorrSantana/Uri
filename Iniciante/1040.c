#include<stdio.h>

int main(){

    double n1,n2,n3,n4,media,notaExame;

    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media =((n1*2) +(n2*3) + (n3*4) + n4)/10.0;

    printf("Media: %.1lf\n",media);

    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(media<5){
        printf("Aluno reprovado.\n");
    }
    if(media >=5 && media <=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&notaExame);
        printf("Nota do exame: %.1lf\n",notaExame);

        media = (media + notaExame)/2.0;
        if(media>=5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",media);
    }

    return 0;
}
