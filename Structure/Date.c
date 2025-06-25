#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;

    }date;
    date a,b;

    a.day =28;
    a.month=04;
    a.year=2024;

    b.day = 01;
    b.month = 05;
    b.year =2024;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;
     if(flag==true) printf("The year is same");
     else printf("The year is not same");
     return 0;

    
}