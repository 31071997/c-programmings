#include <stdio.h>
int main ()
{
    int array[8]={32, 51, 27, 85 , 66, 23, 13, 57},i,j, temp;
    for(i=0; i<7; i++)
    {
        for(j=i+1; j<8;j++)
        {
           if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(i=0; i<8; i++)
        printf("%d\n", array[i]);
    return 0;
}

