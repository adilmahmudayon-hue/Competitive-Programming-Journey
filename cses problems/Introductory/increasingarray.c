#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);

    long long  arr[n];
    long long d,m=0;

    for( int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
        if(i>0)
        {
            if(arr[i-1]>arr[i])
            {
                d=arr[i-1]-arr[i];
               
                m+=d;
                arr[i]=d+arr[i];
             
            }
        }
    }

    printf("%lld\n",m);



    return 0;
}