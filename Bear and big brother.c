#include <stdio.h>
int main()
{
    int wl, wb, i;
    while(scanf("%d %d", &wl, &wb)==2)
    {
        if(wl<1 ||wb<1 ||wl>10 ||wb>10 ||wl>wb)
            return 0;
        else
        {
            for(i=0; wl<=wb; i++)
            {
                wl*=3;
                wb*=2;
            }
            printf("%d\n", i);
        }
    }
    return 0;
}
