#include<stdio.h>
void decresing(int n){
    if(n==0) return; //base case
    printf("%d\n",n); // code
    decresing(n-1);   // call
    printf("%d\n",n); // code
    return;

}
int main(){
int n;
printf("Enter the number of n: ");
scanf("%d",&n);
decresing(n);
return 0;
}