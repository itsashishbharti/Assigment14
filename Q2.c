#include<stdio.h>
int main()
{
    int s[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
    float sum=0;
      for(int i=0;i<10;i++)
    {
        sum=sum+s[i];
    }
    printf("\nSum Of array is %f",sum/10);
    return 0;
}