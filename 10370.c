#include <stdio.h>
int main()
{
    int C,n, N, mark[1000];
    double average, percentage, sum, above_average;
    scanf("%d", &C);
    while(C > 0)
    {
        scanf("%d", &N);
        sum = 0;
        for(n=0; n<N; n++)
        {
            scanf("%d", &mark[n]);
            sum += (double)mark[n];
        }
        average = (double)(sum/N);
        above_average = 0;
        for(n=0; n<N; n++)
        {
            if((double)mark[n] > average)
                above_average++;
        }
        percentage = (above_average*100)/N;
        printf("%.3lf%%\n", percentage);
        C--;
    }
}
