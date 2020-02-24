#include <stdio.h>
int main()
{
    int i;
    char str[500];
    while(gets(str)){
        for(i=0; str[i]!=0; i++)
        {
            str[i]=str[i]-7;
        }
        puts(str);
    }
    return 0;
}
