#include<stdio.h>
int main(){
    typedef struct pokemon{
    int hp;
    int speed;
    char name[50];
    int attack;
    }pokemon;
    typedef struct lagendarypokemon{
    pokemon normal;
    char ability[100];
    }lagendarypokemon;
    typedef struct godpokemon{
        lagendarypokemon legend;
        int specialattack;
    }godpokemon;

    godpokemon suman;
    suman.specialattack = 300;
    strcpy(suman.legend.ability,"destroy enyone");
    suman.legend.normal.attack =500;
    printf("%d",suman.legend.normal.attack);
    return 0;
}