// :) :)
//Magic Matrix
#include <stdio.h>
#define MAX 20
int main()
{
    int i,j,n,a[MAX][MAX];
    printf("Enter Order Of Matrix.");
    scanf("%d",&n);
    i=0;j=((n-1)/2);
    if(n%2!=0)
    {
    for(int num=1;num<=n*n;num++)
    {
        a[i][j]=num;
        i--;
        j--;
        if(num%n==0)
        {
            i+=2;
            j++;
        }
        else if(i==-1)
        i=n-1;
        else if(j==-1)
        j=n-1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    }
else
printf("Error!! Try with odd no");
}

