// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int n,i,j=0,y;
    char x,s[100],a[100];
    printf("Enter the code:");
    scanf("%s",a);
    printf("Enter the actions:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='r')
        j+=1;
        if(s[i]=='l')
        j-=1;
        if(s[i]=='t')
        {
            if(a[j]!='9')
            a[j]+=1;
            else
            a[j]='9';
        }
        if(s[i]=='d')
        {
            if(a[j]!='0')
            a[j]-=1;
            else
            a[j]='0';
        }
        if(s[i]=='s' && (s[i+1]>='1'&&s[i+1]<='9'))
        {
        y=s[i+1]-49;
        x=a[j];
        a[j]=a[y];
        a[y]=x;  
        }
    }
    printf("%s",a);
    return 0;
}
