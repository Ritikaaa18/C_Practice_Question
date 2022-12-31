#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x cordinate \n");
    scanf("%d",&x);
    printf("Enter the y cordinate \n");
    scanf("%d",&y);
    if(x==0)
    {
        printf("The point lies on y axis");
    }
    else if (y==0)
    {
        printf("The point lies on x axis");
    }
    else if ( x==0 && y==0)
    {
        printf("The point lies on origin");
    }
    else
    {
        printf("The point does not lie on any axis neither origin");
    }
    return 0;
    

}