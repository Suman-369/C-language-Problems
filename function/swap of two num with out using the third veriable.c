#include <stdio.h>
void main() {
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is:%d\n",a);
    printf("the value of b is:%d",b);
    }
