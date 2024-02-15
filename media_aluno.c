/*
neste programa iremos calcular a nota media do aluno.
Teremos a entrada de 4 notas , depois sera feito o calculo da media , onde iremos somar as notas e depois dividir por 4.
se o aluno tiver uma edia acima ou igual a 7, entao estara aprovado; caso o aluno tenha ma nota menor ou igual a 4 , entao o aluno sera reprovado; caso ao contrario , estara em recuperaçao. 
*/
#include <stdio.h>

int main(){
    float n1,n2,n3,n4,md;
    printf("digite a primeira nota");
    scanf("%f",&n1);

        printf("digite a segunda nota");
    scanf("%f", &n2);

        printf("digite a terceira nota");
    scanf("%f", &n3);

        printf("digite a quarta nota");
    scanf("%f",& n4);

    md = (n1+n2+n3+n4) /4;
    printf("a nota do aluno é %f\n",md);

    if (md >= 7){
    printf("aprovado\n");
    }
    else if (md <=4){
        printf("reprovado\n");
    }
    else{
        printf("recuperaçao");
    }
    return 0;
}