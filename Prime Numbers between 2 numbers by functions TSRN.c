#include<stdio.h>
void PrimeNumbersbetween2numbers(int,int);
int main()
{
    int n,m;
    printf("\n\nEnter the starting range\n\n");
    scanf("%d",&n);
    printf("\n\nEnter the range ending\n\n");
    scanf("%d",&m);
    PrimeNumbersbetween2numbers (n,m);
    return 0;
}
void PrimeNumbersbetween2numbers(int n, int m)
{
   int a,b,c,i;
   for(i=n;i<=m;i++)
    {
        a=i;

        for(b=2;b<a;b++)
        {

            c=a%b;

            if(c==0)
            {

                b=a;

            }
        }
    if(c!=0)printf("\n%d\n",a);
    }
}
