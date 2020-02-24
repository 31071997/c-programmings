#include <stdio.h>
#include <string.h>
char shift(char a, char b[])
{
    char temp1,temp2;
    int i;
    for(i=0; i<strlen(b); i++)
    {
        temp1=b[i];
        b[i]=a;

        for(i=0; i<strlen(b); i++)
        {
            temp2=b[i+1];
            b[i+1]=temp1;
            temp1=temp2;

        }
    }

}
int main()

{
    char str[100];
    int i, n=0;
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='"')
            n++;
        if(n%2==1)
        {
            str[i]='`';
            i++;
            while(str[i]!='"')
            {
                shift('`',str[i]);
            }
        }
    }
    puts(str);
    return 0;


}
