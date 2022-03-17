#include<stdio.h>
int main()
{
    long int p;
    int n;
    float r,SI;
    printf("\n Enter principle Amount:");
    scanf("%ld",&p);
    printf("\n Enter rate of interest:");
    scanf("%f",&r);
    printf("\n Enter number of years:");
    scanf("%d",&n);
    SI=p*n*r/100;
    printf("\n\n Interest Amount %6.2f Rs.",SI);
}