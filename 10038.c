#include <stdio.h>
int dif(int a, int b)
{
    int ans;
    ans=abs(a-b);
    return ans;
}
int main()
{
    int array1[3000], array2[3000],i,j,n, array3[3000];
    while(scanf("%d", &n)==1)
    {
        for(i=0; i<n; i++)
        scanf("%d", &array1[i]);
        for(i=0; i<n-1; i++)
        {
            array2[i]=dif(array1[i],array1[i+1]);
        }

        j=1;
        for(i=0; i<n-2; i++)
        {
            if(dif(array2[i],array2[i+1])!=1)
            {
                j=0;
                break;
            }

        }
        if(j==1)
            printf("Jolly\n");
        if(j==0)
            printf("Not jolly\n");

    }
    return 0;
}
