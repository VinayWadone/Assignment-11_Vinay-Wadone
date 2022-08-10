#include<stdio.h>
int LCM(int, int);
int main()
{
    int a,b,c;
    printf("\n\nEnter the first number\n\n");
    scanf("%d",&a);
    printf("\n\nEnter the second number\n\n");
    scanf("%d",&b);
    c=LCM(a,b);
    printf("\n\nThe LCM of two numbers %d & %d is: %d\n\n",a,b,c);
    return 0;
}

int LCM(int x, int y)
{
    int d, c;
    d=x*y;
    if(x>y)
    {
     c=x%y;
     if(c==0)return x;
     else return d;
    }
    else
     c=y%x;
     if(c==0)return y;
     else return d;
    //printf(b%a==0?"\n\nLCM is %d\n\n",b:"\n\nLCM is %d\n\n",a*b);

}
