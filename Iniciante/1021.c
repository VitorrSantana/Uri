#include<stdio.h>

int main(){

    double money;
    int cem =0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0;
    int umReal =0,cinquentaCent =0,vinteCincoCen =0,dezCen =0,cincoCen=0,umCent=0;
    
    int valorInteiro,valorFracionario;
    scanf("%lf",&money);

    valorInteiro = (100 * money) / 100 ;// Pega o valor
    valorFracionario = 100 * money ;
    valorFracionario = valorFracionario%100;

    if(valorInteiro/100>=1){

        cem = valorInteiro / 100;
        valorInteiro = valorInteiro - (cem*100);
    }
    if(valorInteiro/50>=1){

        cinquenta = valorInteiro / 50;
        valorInteiro = valorInteiro - (cinquenta*50);
    }
    if(valorInteiro/20>=1){

        vinte = valorInteiro / 20;
        valorInteiro = valorInteiro - (vinte*20);
    }
    if(valorInteiro/10>=1){

        dez = valorInteiro / 10;
        valorInteiro = valorInteiro - (dez*10);
    }
    if(valorInteiro/5>=1){

        cinco = valorInteiro / 5;
        valorInteiro = valorInteiro - (cinco*5);
    }
    if(valorInteiro/2>=1){

        dois = valorInteiro / 2;
        valorInteiro = valorInteiro - (dois*2);
    }
    if(valorInteiro/1>=1){

        umReal = valorInteiro / 1;
        valorInteiro = valorInteiro - (umReal*1);
    }

    if(valorFracionario/50>=1){
        cinquentaCent = valorFracionario/50;
        valorFracionario = valorFracionario - (50*cinquentaCent);
    }
    if(valorFracionario/25>=1){
        vinteCincoCen = valorFracionario/25;
        valorFracionario = valorFracionario - (25*vinteCincoCen);
    }
    if(valorFracionario/10>=1){
        dezCen = valorFracionario/10;
        valorFracionario = valorFracionario - (10*dezCen);
    }
    if(valorFracionario/5>=1){
        cincoCen = valorFracionario/5;
        valorFracionario = valorFracionario - (5*cincoCen);
    }
    if(valorFracionario/1>=1){
        umCent = valorFracionario/1;
        valorFracionario = valorFracionario - (1*umCent);
    }
    
    printf ("NOTAS:\n");
   
    printf ("%d nota(s) de R$ 100.00\n",cem);
    printf ("%d nota(s) de R$ 50.00\n",cinquenta);
    printf ("%d nota(s) de R$ 20.00\n",vinte);
    printf ("%d nota(s) de R$ 10.00\n",dez);
    printf ("%d nota(s) de R$ 5.00\n",cinco);
    printf ("%d nota(s) de R$ 2.00\n",dois);
    
    printf ("MOEDAS:\n");
    
    printf ("%d moeda(s) de R$ 1.00\n",umReal);
    printf ("%d moeda(s) de R$ 0.50\n",cinquentaCent);
    printf ("%d moeda(s) de R$ 0.25\n",vinteCincoCen);
    printf ("%d moeda(s) de R$ 0.10\n",dezCen);
    printf ("%d moeda(s) de R$ 0.05\n",cincoCen);
    printf ("%d moeda(s) de R$ 0.01\n",umCent);


    return 0;

}