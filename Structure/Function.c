#include<stdio.h>
#include<string.h>

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
    
    }pokemon;
    void fun(pokemon p){
        printf("%d",p.hp);
        return;
    }
    int main(){

    pokemon pikachu;
    pikachu.hp=60;
    fun(pikachu);
    return 0;
}