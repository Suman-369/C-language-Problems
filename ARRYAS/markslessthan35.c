#include<stdio.h>
int main(){
    int marks[5]= {80,23,65,100,35};
    for(int i=0; i<5; i++){
        if(marks[i]<35) {
            printf("%d ",i);
        }
    }
    return 0;
}