#include <stdio.h>

int main(void) {

  int horaIn,minIn,horaFim,minFim;
  int tempHora,tempMin;
  scanf("%d %d %d %d",&horaIn,&minIn,&horaFim,&minFim);

  if(horaFim== horaIn && minFim== minIn){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    return 0;
  }

  if(horaFim<=horaIn && minFim<minIn){
    tempHora = (24+horaFim)-horaIn;
  }else{
    tempHora = horaFim-horaIn;
  }
  if(minFim<minIn){
     tempHora--;
     tempMin = (minFim+60)-minIn;
  }else{
     tempMin = minFim-minIn;
  }

printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempHora,tempMin);


  return 0;
}