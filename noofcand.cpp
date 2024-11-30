// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int n,i,sum=0,a[100],t[100],s2=0;
    printf("Enter the no of boxes:");
    scanf("%d",&n);
    printf("Enter the no of candles in each box:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sum=a[0];
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
        t[i-1]=sum;
    }   
    for(i=0;i<n-1;i++)
    s2+=t[i];
    printf("The total time is:%d",s2);
    return 0;
}
