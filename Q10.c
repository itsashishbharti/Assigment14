#include<stdio.h>
int main()
{
    int s[10],d[10];
      for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
    for(int i=0;i<10;i++)
    {
        d[i]=s[i];
    }
     for(int i=0;i<10;i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}