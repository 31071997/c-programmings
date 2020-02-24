#include<stdio.h>
int max(int a,int b)
{
    return(a>=b)? a:b;
}
int dp[1000][1000];
int weight[1000],cost[1000];
int cap,n;
int func(int i,int w)
{
    if(i==n)
    return 0;
    if(dp[i][w]!=-1)
    return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=cap)
    {
        profit1=cost[i]+func(i+1,w+weight[i]);
    }
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
return dp[i][w];
}
int main()
{
    int t,g,ans,f,i,j;
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d %d",&cost[i],&weight[i]);
        scanf("%d",&g);
        while(g--)
        {
            for(i=0;i<1000;i++){
                for(j=0;j<1000;j++)
                dp[i][j]=-1;
            }
            scanf("%d",&cap);
            f=func(0,0);
            ans=ans+f;
        }
        printf("%d\n",ans);
    }
return 0;
}
