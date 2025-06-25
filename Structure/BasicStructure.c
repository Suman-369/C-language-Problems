#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
    
    };//pokemon,suman;
    struct pokemon pikachu;
    pikachu.attack =60;
    pikachu.hp = 90;
    pikachu.speed = 100;

    printf("%d\n",pikachu.attack);

    struct pokemon suman;
    suman.attack = 70;
    suman.hp =100;
    suman.speed =130;

     printf("%d",suman.attack);

    return 0;
}