#include<stdio.h>
int main()
{
     int s[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
      int small=s[0];
        for(int i=1;i<10;i++)
        {
            if(small>s[i])
            {
                small=s[i];
            }
        }
        printf("\n Small=%d",small);
        return 0;
}