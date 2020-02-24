#include <stdio.h>
int main()
{
    int m,n, i,h;
    while(scanf("%d %d", &n, &m)==2)
    {
        if(n<m)
            break;
        else
        {
            h=n;
            for(i=1; n>0; i++)
            {
               if(i==1)
                {
                    n=h-i;

                }

                else if(n+m>=h)
                    {
                        n=h-i;

                    }
                else
                    {
                        n=n+m;
                        n=n-i;

                    }
            }
            printf("%d\n", i-1);
        }
    }
    return 0;
}
