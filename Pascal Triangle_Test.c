
//As per the explanation by Prateek sir in a doubt clearing session on 28th July.
#include<stdio.h>
void pascal(int);
int comb(int,int);
int fact(int);
int main()
{
    int x;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&x);
    printf("\n\n\n\n");
    pascal(x);
    return 0;
}
int comb(int a, int b)
{
    int c;
    c = fact(a)/(fact (b)*fact(a-b));
    return c;
}
fact(int n)
{
    int i, fact =1;
    for (i=1; i<=n; i++)
        fact = fact*i;
    return fact;
}
pascal(int n)
{
    int i,j;
    for (i=1;i<=n;i++)
    {
       //for(j=0;j<=i;j++)printf(" %d ",comb(i,j));
        for(j=1;j<=i;j++)
        {
            if ((j==(5-i))||(j==(i+3))||((j%i)!=0)) printf(" 0 ");
            else printf("1");
        }
        printf("\n");
    }
}
