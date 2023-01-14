#include<stdio.h>
int main(){
    int n;
    int a = 0;
    int b = 1;
    int r ;
    printf("Input a decimal number :");
    scanf("%d",&n);
   while(n!=0)
   {
    r = n%2;
    n = n/2;
    a= a + (r*b);
    b = b*10;
   }
   printf("The binary number is :%d", a);
   return 0;

}