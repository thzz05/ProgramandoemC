# estudo da linguagem C
# repositorio sera e publicado arquivos escritos em C

<img src="https://www.dialhost.com.br/blog/wp-content/uploads/2019/09/C_logo-3-953x1024.png" height="300" width="300">

### abaixo sera apresentado os arquivos deste repositorio

### hello.c

```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0
}
```
### operaçoes.c
```c
#include<stdio.h>

int main(){
int n1;
int n2;
int soma;
int subtrair;
int multiplicar;
int dividir;

printf("Digite um numero e tecle enter: \n");
scanf("%d",&n1);

printf("digite outro numero e tecle enter: \n");
scanf("%d" ,&n2);

soma = n1 + n2;
subtrair = n1 - n2;
multiplicar = n1 * n2;
dividir = n1 / n2;

printf("o resultado da soma é %d\n" ,soma);
printf("o resultado da subtraçao é %d\n", subtrair);
printf("o resultado da multiplicaçao é %d\n", multiplicar);
printf("o resultado da divisao é %d\n", dividir);

return 0;

}
```
### descontos_produtos.c
```c
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
```
### notas.c
```c
#include<stdio.h>

int main(){
float n1;
float n2; 
float n3;
float n4;
float media;

printf("digite n1: \n");
scanf("%f",&n1);

printf("digite n2: \n");
scanf("%f",&n2);

printf("digite n3: \n");
scanf("%f",&n3);

printf("digite n4: \n");
scanf("%f",&n4);

media = (n1 + n2 + n3 + n4) /4;

printf("a media do aluno é:%.2f\n",media);

return 0;

}
```

#### desvio de fluxo : parimpar.c

```c
#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);

    if( num % 2 == 0){
        printf("Este número é par \n");
    }
    else{
        printf("Este número é impar \n");
    }
    return 0;
}
```
#### desvio de fluxo : media-aluno.c

```c
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
```

#### bissexto.c
```c

#include <stdio.h>

int main() {
    int ano;

    // Solicita ao usuário para inserir o ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
```