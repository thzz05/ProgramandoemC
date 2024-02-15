/*
este programa pede ao usuario um numero qualquer e depois exibi esse numero na tela
*/
#include <stdio.h> //estamos importanto uma biblioteca para trabalhar com entrada e saida de dados

int main(){
    int idade; //declaraçao da variavel idade do tipo inteiro
    printf("digite a sua idade e tecle enter\n");
    scanf("%d" ,&idade); //para pegar o numero digitado pelo usuario
                         //estamos usando o comando scanf e usando aquis
                         //o valor digitado ao endereço de memoria 
                         //de variavel idade.Usamos o e-comercial para
                         //referenciar o endereço de memoria da variavel
                         //idade

printf("a idade digitada é %d\n endereço da variavel idde %x \n ", idade, &idade);
return 0;

}