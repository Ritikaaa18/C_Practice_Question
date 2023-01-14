#include<stdio.h>
int main()
{
    int n;
    int d;
    int rev = 0;
    printf("Enter the number \n");
    scanf("%d",&n);
    int c = n;
    if(n<0)
    {
        printf("false");
    }
    else
    {
    while(n!=0)
    {
      d = n%10;
      rev = (rev*10)+d;
      n = n/10;
    }
    if(c == rev)
    {
        printf("true");
    }
    else

    {
        printf("false");
    }
    }
    return 0;
}