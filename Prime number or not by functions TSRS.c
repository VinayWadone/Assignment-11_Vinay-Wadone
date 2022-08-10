#include<stdio.h>
int prime(int);
int main()
{
    int i,j;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&i);

   j=prime(i);
    if (j==1) printf("\n\nIts a Prime Number\n\n");
    else printf("\n\nIts NOT a Prime Number\n\n");

     return 0;
}

int prime(int i)
{

    int j,k,rem;
    j=2;
    k=2;
    while(j<i)
        {
            rem=i%j;
            if(rem==0) j=i;
            k++;j++;
        }
        //printf("\n\nK = %d\n\n",k);

        if(k==j) return 1;
        else return 0;

}

