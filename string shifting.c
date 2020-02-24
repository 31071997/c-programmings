#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp1,temp2;
    int i;
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        temp1=str[i];
        str[i]='1';

        for(i=0; i<strlen(str); i++)
        {
            temp2=str[i+1];
            str[i+1]=temp1;
            temp1=temp2;

        }
    }
    puts(str);
    return 0;
}
