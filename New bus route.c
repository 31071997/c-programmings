#include<stdio.h>
/*int min(int a[])
{
    int i, min=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}*/
int main()
{
    int a[1000],j, n, min,i,num, sub[1000],k;
    while(scanf("%d", &n)==1)
    {
        for(i=0;i<n; i++)
            scanf("%d", &a[i]);
        k=0;
        for(i=0;i<n-1; i++)
        {
            for(j=i+1;j<n; j++, k++)
            {
                sub[k]=abs(a[i]-a[j]);

            }
        }
        min=sub[0];
        num=0;
        for(i=1; i<=k; i++)
        {
            if(sub[i]<min)
                min=sub[i];

        }
        for(i=0; i<=k; i++)
        {
            if(sub[i]==min)
                num++;
        }
        /*min=sub[0];
        for(i=1; i<n; i++)
        {
            if(sub[i]<min)
                min=sub[i];
        }
   //     res=min(a[n]);*/
        printf("%d %d \n", min, num);
    }
    return 0;
}
