#include <stdio.h>

int main()
{
    long long int x;
    long long int z;
    
    scanf("%lld",&x);
    int y;

    for(int i = 0; i < x;i++)
    {
        scanf("%d",&y);
        printf("Case #%d:\n",i+1);
        for(int j = 0; j < y ;j++)
        {
            for(int l = j; l < y-1 ;l++)
            {
                printf(" ");
            }
            for(int l = 0; l <= j ;l++)
            {
                if (y % 2 == 0)
                {
                    if(l % 2== 0)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf("*");
                    }
                    
                }
                else
                {
                    if(l% 2== 0)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf("#");
                    }
                }

            }
            printf("\n");
        }
        
    }
    
    return 0;  
}  
