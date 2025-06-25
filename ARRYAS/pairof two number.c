#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d",&n);

int a[n];
for(int i=0; i<=n-1;i++){
printf("Enter the number of %d element : ",i);
        scanf("%d",&a[i]);
    }
int totalpair =0;
int x;
printf("Enter the value of x :");
scanf("%d",&x);
for(int i=0;i<=n-1;i++){
    for(int j=i+1;j<=n-1;j++){
        if(a[i]+a[j]==x){
            totalpair++;
            printf("(%d , %d)\n",a[i],a[j]);
        }
    }
    
}
printf("%d",totalpair);
    return 0;

}