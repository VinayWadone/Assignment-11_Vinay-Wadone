//https://www.cuemath.com/numbers/hcf-of-two-numbers/
#include<stdio.h>
int HCF(int, int);
int main()
{
    int a,b,c,i;
    printf("\n\nEnter the first number\n\n");
    scanf("%d",&a);
    printf("\n\nEnter the second number\n\n");
    scanf("%d",&b);
    c=HCF(a,b);
    printf("\n\n%d is the HCF\n\n",c);
    return 0;

}
    int HCF(int a, int b)
    {
        int c,i;
        c=b%a;

    if (a<b)
    {
        for(i=1;c>0;i++)
        {
            c=b%a;
            if(c!=0)
            {
                b=a;
                a=c;
            }
            else return a;
        }
    }
    else
        {
        for(i=1;c>0;i++)
        {
            c=a%b;
            if(c!=0)
            {
                a=b;
                b=c;
            }
            else return b;
        }
    }

    }




