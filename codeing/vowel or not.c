#include<stdio.h>
void main(){
char c;
printf("enter the alphabet: ");
scanf("%c",&c);
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
{printf(" the alphabet is vowel.");}
else
printf(" the alphabet is consonent.");
}
 