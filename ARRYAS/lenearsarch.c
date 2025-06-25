#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    
    scanf("%d",&n);
    int arr[n];
for( int i=0; i<=n-1; i++){
    printf("Enter the %d number :",i);
    scanf("%d",&arr[i]);
}
int x;
printf("Enter the value of X :");
 scanf("%d",&x);
int idx= -1;
bool flag = false; //false means not present ;
for(int i=0;i<=6;i++){
    if(arr[i]==x){
        flag = true;
        idx = i; //true means present;
        break;

    }
}
if(flag==false){
    printf("%d is not present in this array",x);

}
else{
    printf("%d is present in this array and his index is %d",x,idx);
}
}
