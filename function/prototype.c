#include <stdio.h>
void australia(){
    printf("You are in Australia\n");
    void england();
    england(); // calling england //  3
    return;
}
int main(){
    void india();
    india(); // calling india // 1
    return 0;
}


void india(){
    printf("You are in India\n");
    void australia();
    australia(); // calling aus// 2
    return;  
}
void england(){
    printf("You are in England\n");
    return;
}