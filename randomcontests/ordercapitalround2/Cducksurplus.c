#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    for( int i=0; i<t; i++)
    {
        int n; scanf("%d",&n);
        long long arr[n];
    

        for(int i=0; i<n; i++)
        {
            scanf("%lldd",&arr[i]);
        }

        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                
                int temp=arr[i+1];
                
                arr[i+1]=arr[i]+arr[i+1];
                arr[i]=temp;

            }
        }

        printf("%lld\n",arr[n-1]);
        
    }


    return 0;
}


