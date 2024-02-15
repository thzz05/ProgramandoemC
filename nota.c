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