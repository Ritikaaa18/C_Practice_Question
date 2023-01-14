#include<stdio.h>
int main(){
    int n , i , c;
    int a = 0;
    int b = 1;
    printf("Enter the no. of terms till you want to print\n");
    scanf("%d",&n);
    printf("The numbers are :- \n");
    if(n==1)
    {
        printf("0");

    }
    else if(n==2)
    {
        printf(" 0\n 1");

    }
    else
    {
      printf("0 \n1 \n");
      for(i=3;i<=n;i++)
      {
      c = a+b;
      a=b;
      b=c;
      printf("%d \n",c);
      }
    }
    return 0;
}