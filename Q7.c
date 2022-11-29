#include<stdio.h>
int main()
{
     int s[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
        int big=s[0];
        int a;
        for(int i=1;i<10;i++)
        {
            if(big<s[i])
            {
                a=big;
                big=s[i];
            }
        }
        printf("\n Big=%d",a);
        return 0;
}