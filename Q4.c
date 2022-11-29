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
        for(int i=1;i<10;i++)
        {
            if(big<s[i])
            {
                big=s[i];
            }
        }
        printf("\n Big=%d",big);
        return 0;
}