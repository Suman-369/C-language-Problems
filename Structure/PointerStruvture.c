#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char name[50];
    char tier;
}pokemon;

void change(pokemon* p){
    p->hp = 70; //another way of accsesing
    (*p).attack = 80;
    (*p).speed = 110;
    (*p).tier= 'S';
    strcpy((*p).name,"Suman");

    printf("\n");
}
int main(){
    pokemon pikachu;
    pikachu.attack=100;
    pikachu.hp=200;
    pikachu.speed=180;
    strcpy(pikachu.name,"pikachu");
    pikachu.tier='A';

    pokemon* x =&pikachu;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);
    printf("%c\n",pikachu.tier);

    change(&pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%s\n",pikachu.name);
    printf("%c\n",pikachu.tier);

    (*x).hp =70;
    (*x).attack = 120;
    printf("%d",pikachu.hp);
    return 0;
}