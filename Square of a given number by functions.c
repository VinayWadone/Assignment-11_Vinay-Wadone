#include<stdio.h>
int square(int);
int main()
{
    int a,b;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    b=square(a);
    printf("\n\nThe square of your number %d is: %d\n\n",a,b);
    return 0;
}

int square(int x)
{
    int y;
    y=x*x;
    return y;
}
