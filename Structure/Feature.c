#include<stdio.h>
#include<string.h>
int main(){
 typedef struct pokemon{
 int hp;
 int attack;
 char name[50];
 int speed;
 }pokemon;
 pokemon a,b;

 a.attack =100;
 a.hp =200;
 a.speed =80;
 strcpy(a.name,"suman");

 b=a;
 printf("%d",b.attack);
}