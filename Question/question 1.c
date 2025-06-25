#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
    if((char)arr[i]=='5') printf("%d\n",arr[i]);
    else printf("FAIL\n");


return 0;
}