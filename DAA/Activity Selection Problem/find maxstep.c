#include<stdio.h>


void sortact(int act[][2],int n){
    for ( int i =0 ;i < n; i++){
        for(int j=0;j< n-i-1 ;j++){

            if(act[j][1] > act[j+1][1]){
                int tempstart = act[j][0];
                int tempend = act[j][1];

                act[j][0] = act [j+1][0];
                act[j][1] = act [j+1][1];
                act[j+1][0] = tempstart;
                act[j+1][1] = tempend;
            }
        }
    }
}


int maxactivity(int act[][2], int n){
    sortact(act,n);


    int count = 1;
    int lastEndTime = act[0][1];

    printf("Selected Activity : \n");

    printf(" [%d %d ]\n",act[0][0],act[0][1]);

    for(int i =0; i<n ;i++){
        if (act[i][0] >= lastEndTime){
            printf(" [%d %d ]\n",act[i][0],act[i][1]);

            lastEndTime = act[i][1];
            count++;
        }
    }
    return count ;
}






int main(){
    int n;
    printf("Enter The Number Of Activities : ");
    scanf("%d",&n);

    int act[n][2];
    printf("Enter the Start And End Point :\n ");
    for(int i =0 ;i < n ;i++){
        printf("Activity %d:",i+1);
        scanf("%d %d",&act[i][0] ,&act[i][1]);

    }

    int maxCount = maxactivity(act,n);

    printf("Max no of Activity That can perform by your computer is %d \n",maxCount);

    return 0;
}