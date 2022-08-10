#include<stdio.h>
int NextPrime(int);
int main()
{
    int a,b,c,i,n,m;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&n);
    m=NextPrime(n);
    printf("\n%d\n",m);
    return 0;
}

int NextPrime(int n)
{
    int i,a,b,c;
    n=n+1;

    for(i=n;i<=n+100;i++)
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
        if(c!=0)
        {
            return a;
            break;
        }
 }
}
