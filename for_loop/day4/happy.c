#include<stdio.h>
int main()
{
    int n;
    int d;
    int h =0;
    printf("Enter the number \n");
    scanf("%d",&n);
    while(h!=3 && h!=1 && h!=2) 
    {h=0;
        while(n!=0)
        {
             d = n%10;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
             h = h + (d*d);
             n = n/10;
        }
        
        
        n=h;
    
    }
    if(h==1)
    {
        printf("true");

    }
    else{
        printf("false");
    }
    return 0;
}