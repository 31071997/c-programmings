#include <stdio.h>
int main()
{
    int a,b,c,d,i;
    while(scanf("%d %d %d %d ", &a, &b, &c, &d))
    {
        if(a<1 ||b<1 ||c<1 ||d<1 ||a>100 ||b>100 ||c>100 ||d>100)
            break;
        else
        {
            for(i=0; ; i++)
            {

                b=b+i*a;
                d=d+i*c;
                if((b%2==1 && d%2==0) || (b%2==0 && d%2==1))
                {
                    printf("-1\n");
                    break;
                }

                else if(b==d){
                    printf("%d\n",i);
                    break;
                }
                else if((b%2==1 && d%2==1) || (b%2==0 && d%2==0))
                    continue;


            }
        }
    }
    return 0;
}
