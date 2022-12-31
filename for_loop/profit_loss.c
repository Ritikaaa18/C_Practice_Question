#include<stdio.h>
int main () {
    int a; int b;
    printf("Enter the cost price :\n ");
    scanf("%d",&a);
     printf("Enter the selling price :\n ");
      scanf("%d",&b);
      if(a>b)
      {
        printf("It is a loss\n ");
        int c = a-b;
        printf("The loss is: %d\n ",c);
      }
      else
      {
        printf("It is a profit\n ");
        int d = b-a;
        printf("The profit is: %d\n ",d);

      }
      return 0;


}