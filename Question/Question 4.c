#include<stdio.h>
void pyramid(n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
         printf("\n");
    }
   
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            printf("%d",i);
        }
          printf("\n");
}
    }
  
int main(){
int n;
printf("Enter the row of a pyramid : ");
scanf("%d",&n);
pyramid(n);
    return 0;
}