#include<stdio.h>
typedef int* suman;
int main(){
int x= 5;
int y = 7;
// int* a =&x;
// int* b =&y;
suman a =&x,b=&y;
printf("%p\n",a);
printf("%p",b);
    return 0;

}