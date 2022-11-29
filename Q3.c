#include<stdio.h>
int main()
{
    int s[10];
    for(int i=0;i<10;i++)
    {
        printf("\nEnter Your Number= ");
        scanf("%d",&s[i]);
    }
    float even=0,odd=0;
    int c=0;
      for(int i=0;i<10;i++)
    {
        if(s[i]%2==0)
        {
            even=even+s[i];
            c++;
        }
        else
        {
            odd=odd+s[i];
        }
    }
    printf("\nSum Of array is %f",even/c);
    printf("\nSum Of array is %f",odd/(10-c));
    return 0;
}