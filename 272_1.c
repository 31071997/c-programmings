#include <stdio.h>
#include <string.h>
int main()
{
    int i, n=0,j;
    char str[100],temp;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='"')
        {
            n++;
            j=i;
            while(str[i+1]!='"')
            {
                str[i+2]=str[i+1];
                i++;
            }
            if(n%2==1)
            {
                str[j]='`';
                str[j+1]='`';
            }
            else
            {
                str[j]='\'';
                str[j+1]='\'';
            }
        }

    }
    puts(str);
    return 0;
}
