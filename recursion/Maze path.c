#include<stdio.h>
int maze(int cr, int cc, int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
            rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
            downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    
    int totalways = rightways+downways;
    return totalways;
}
int main(){
int a;
printf("Enter the number of rows of maze: ");
scanf("%d",&a);
int b;
printf("Enter the number of colums of the maze: ");
scanf("%d",&b);
int numberofways= maze(1,1,a,b);
printf("%d",numberofways);
    return 0;
}