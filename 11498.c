#include <stdio.h>
int main()
{
    int k,K,N,M,X,Y;
    while(scanf("%d", &K))
    {
        if(K == 0)
            return 0;
        for(k=1; k<=K; k++)
        {
            scanf("%d %d", &N, &M);
            for(k=0; k<K; k++)
            {
                scanf("%d %d", &X, &Y);
                if(X == N || Y == M)
                    printf("divisa\n");
                else if(X < N && Y > M)
                    printf("NO\n");
                else if(X > N && Y > M)
                    printf("NE\n");
                else if(X < N && Y < M)
                    printf("SO\n");
                else if(X > N && Y < M)
                    printf("SE\n");
            }
        }
    }
    return 0;
}
