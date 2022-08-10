#include<stdio.h>
void FibNterms(int);
int main()
{
    int n;
    printf("\n\nEnter the number of terms you want\n\n");
    scanf("%d",&n);
    FibNterms(n);
    return 0;
}
void FibNterms(int n)
{
    int a=0, b=1,c,d,i;

    if (n==0) printf("\n\nPlease enter a valid number\n\n");
    if (n==1) printf("\n\nThe term for your number %d is 0\n\n", n,a);
    if (n==2) printf("\n\nThe terms for your number %d is 0,1\n\n", n,b);
    if (n>2)
    {
        printf("\n%d\n",a);
        printf("\n%d\n",b);
        for(i=3;i<=n;i++)
        {
            c=a+b;
            printf("\n%d\n",c);
            a=b;
            b=c;

        }
      //printf("\n\nThe term at the position %d is %d\n\n", n,c);
    }
    return 0;
}
