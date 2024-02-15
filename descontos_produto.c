#include<stdio.h>

int main(){
float preco;
float percentual;
float resultado;
float vdesc; 
printf("digite o preco do produto: \n");
scanf("%f",&preco);

printf("digite o desconto do produto:\n");
scanf("%f",&percentual);

resultado = preco - (preco * (percentual /100));

vdesc = preco - resultado;

printf("o preço final do produto com desconto de %2.2f é %2.2f\n", vdesc,resultado);
return 0;
} 