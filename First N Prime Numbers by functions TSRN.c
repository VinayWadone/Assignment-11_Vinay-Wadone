#include<stdio.h>
void NPrimes(int);
int main()
{
    int n;
    printf("\n\nEnter the range more than 2\n\n");
    scanf("%d",&n);
    NPrimes(n);
    return 0;
}
    void NPrimes(int n)
    {
    int a,b,c,d,i,j;
    j=1;
    for(i=2;j<=n;i++)
    {
        a=i;
        c=1;
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
    printf("\n%d\n",a);
    j++;
    }
    }
    }

