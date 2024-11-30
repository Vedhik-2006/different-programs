#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,r,t,y=0;
    printf("Enter the no:");
    scanf("%d",&n);
    t=n;
    i=1;
    while(t!=0)
    {
        r=t%2;
        t/=2;
        y=y+(r*i);
        i*=10;
    }
    printf("The binary equivalent of %d is %d",n,y);  
    return 0;
}
