#include <stdio.h>

int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
    if(i==n||i==1)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf ("\n");
    }
    else
    {
        for(k=1;k<=n;k++)
        {
        if(k==0||k==0||k==0)
        {
            printf(" ");
        }
        else {
            printf ("*");
        }
        }
        printf ("\n");
    }

}
    return 0;
}
