#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(l=1;l<=10;l++)
    {
        for(k=1;k<=l;k++)
        {
            for(j=1;j<=k;j++)
            {
                for(i=1;i<=j;i++)
                {
                    if((i+j+k)==3)
                    printf("\n%d+%d+%d=%d",i,j,k,l);
               }
           }
        }
    }
}