#include<stdio.h>
#include<string.h>
int main(){
typedef  struct magi{
int hp;
int attack;
char tiar;
char name[50];
}magi;

magi arr[3];
arr[0].attack = 100;
arr[0].hp =90;
arr[0].tiar = 'A';
strcpy(arr[0].name,"suman");

arr[1].attack = 200;
arr[1].hp =50;
arr[1].tiar = 'B';
strcpy(arr[1].name,"unknown1");

arr[2].attack = 600;
arr[2].hp =20;
arr[2].tiar = 'C';
strcpy(arr[2].name,"unknown2");

for(int i=0;i<3;i++){
    printf("%s\n",arr[i].name);
     printf("%d\n",arr[i].attack);
      printf("%d\n",arr[i].hp);
       printf("%c\n",arr[i].tiar);
       
}

return 0;

}