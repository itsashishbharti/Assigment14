#include<stdio.h>
int main()
{
       int s[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
    for(int i=10;i>=0;i--)
    {
        printf("%d ",s[i]);
    }
    return 0;
}