#include<stdio.h>
int main(){
    float c,f=0.0;
    printf("enter the farheneiht: ");
    scanf("%f",&f);
    c=(f-32.0)*(5.0/9.0);
    printf("the celcius value:%f ",c);



    return 0;
}