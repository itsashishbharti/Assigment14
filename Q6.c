#include<stdio.h>
int main()
{
    int s[10];
      for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",s[i]);
    }
    return 0;
}
    