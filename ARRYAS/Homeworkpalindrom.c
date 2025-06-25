 #include<stdio.h>
 #include<stdbool.h>
bool reverse(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j])
         {return true;}
         i++;
         j--;
    }
    return false;
}

int main(){
    // int arr[]={1,2,3,2,1};
    // int n= sizeof(arr)/sizeof(arr[0]);
     int arr[100];
    int n;
    printf("size of an arr : ");
    scanf("%d",&n);
for( int i=0; i<=n-1; i++){
    // printf("Enter the %d number :",i);
    scanf("%d",&arr[i]);
}
    if(reverse(arr,n)){
        printf("palindrom\n");
    }
    else {
        printf("not palindrom\n");
    }
    return 0;
}