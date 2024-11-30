#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,r,t,y=0;
    printf("Enter the no:");
    scanf("%d",&n);
    t=n;
    i=0;
    while(t!=0)
    {
        r=t%10;
        if(r==0)
        {
            r=1;
            y+=r*pow(10,i);
            t/=10;
            i++;
        }
        else
        {
        y+=r*pow(10,i);
        t/=10;
        i++;
    }}
    printf("The number is %d",y);  
    return 0;
}
