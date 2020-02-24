#include <stdio.h>
int main()
{
    int n, m, i,j, a[100][100], b[100][100], dif[100],k;
    while(scanf("%d %d", &n, &m)==2)
    {
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(i=0; i<=m; i++)
        {
            for(j=0; j<=m; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        k=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++, k++)
            {
                dif[k]=a[i][j]
            }
        }
    }
}
