#include<stdio.h>
int main(){
    int n,d;
    int rev =0;
    
    printf("Enter the number \n");
    scanf("%d",&n);
    
    while(n!=0)
    {
        d = n%10;
        rev = (rev*10)+d;
        n = n/10;    }
        printf("The reversed no. is : %d",rev);
        return 0;

}