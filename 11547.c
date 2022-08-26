#include <stdio.h>
int main()
{
    unsigned int t;
    int n,i,result,reminder;
    scanf("%u", &t);
    while(t)
    {
        scanf("%d", &n);
        n = n*567;
        n = n/9;
        n = n+7492;
        n = n*235;
        n = n/47;
        n = n-498;
        for(i=0; i<=1; i++)
        {
            result = n/10;
            reminder = n%10;
            if(i==1)
                break;
            n = result;
        }
        if(reminder < 0)
            printf("%d\n", -1*reminder);
        else
            printf("%d\n", reminder);
        t--;
    }
    return 0;
}
