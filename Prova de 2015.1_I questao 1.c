/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int digito, dg1, dg2, dg3, dg4, dg5;
    int somapar, somaimpar, resultado, resultado_final;
    int dv;
    
    printf("digite cinco numeros:\n");
    scanf("%d", &digito);
    
    dg1=(digito/10000)%10;
    dg2=(digito/1000)%10;
    dg3=(digito/100)%10;
    dg4=(digito/10)%10;
    dg5=(digito/1)%10;
    
    somaimpar=3*((dg1+dg3)+dg5);
    somapar=somaimpar+(dg2+dg4);
    resultado=(10 - (somapar % 10)) % 10;
    resultado_final=(resultado);
    
    printf("%d\n %d, %d, %d, %d e %d", resultado_final, dg1, dg2, dg3, dg4, dg5);
    return 0;
}
