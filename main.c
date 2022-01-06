/******************************************************************************

Programa criado na intenção de ser dificil de ler e editar, basicamente é uma 
calculadorazinha em C, enfim...

Criado por: Luiz Guilherme Costa da Silva
Data: 06/01/2022

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main(){int a, b, c, d=1;do{printf("Digite o primeiro número: ");scanf("%d",&a);printf("Digite o segundo número: ");scanf(" %d",&b);printf("Você quer fazer o que?\n[1] Somar\n[2] Subtrair\n[3] Multiplicar\n[4] Dividir\n>>> ");scanf(" %d",&c);if(c==1)printf("%d + %d = %d",a,b,a+b);else if(c==2)printf("%d - %d = %d", a,b, a - b);else if(c==3)printf("%d * %d = %d", a,b, a * b);else if(c==4)printf("%d / %d = %d", a,b, a / b);else printf("Opção invalida digitada!"); printf("\nPressione 1 e aperte enter se quiser continuar: ");scanf(" %d",&d);system("clear");}while(d==1);}
    
