#include <stdio.h>
void swap(int* x, int* y) {
    int temp;
    temp= *x;
    *x= *y;
    *y = temp;
    return;}
    int main(){
        int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    
        swap(&a,&b);   
    printf("the value of a is:%d\n",a);
    printf("the value of b is:%d",b);
    return 0;
    }
