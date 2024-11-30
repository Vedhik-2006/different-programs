#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,r,t,s,y=0,c=0;
    printf("Enter two numbers:");
    scanf("%d %d",&n,&t);
    if(!(t^n))
    printf("%d is equal to %d",n,t);
    else
    printf("Not equal");
    return 0;
}
