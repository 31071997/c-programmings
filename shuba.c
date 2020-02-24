#include<stdio.h>
void Merge(int a[],int p, int q, int r);
void mergesort(int a[], int p, int r);
int main()
{
    int ara[1000];
    int n,m,i,j,k,p,q,r,z;
    scanf("%d", &n);
    for(k=1; k<=n; k++)
        scanf("%d", &ara[k]);
    mergesort(ara,1,n);
    for(k=1; k<=n; k++)
        printf("%d ", ara[k]);

    return 0;

}
void Merge(int a[],int p, int q, int r)
{
    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    int L[n1+1], R[n2+1];
    for(i=1;i<=n1;i++)
        L[i]=a[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=a[q+j];
    L[n1+1]=9999;
    R[n2+1]=9999;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i=i+1;
        }
        else {
            a[k]=R[j];
            j=j+1;
        }
    }
}

void mergesort(int a[], int p, int r)
{
    int q;
    if (p<r) {q=(p+r)/2;
    mergesort(a,p,q);
    mergesort(a,q+1,r);
    Merge(a,p,q,r);}
}
