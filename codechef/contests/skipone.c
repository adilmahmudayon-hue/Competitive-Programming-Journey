#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
         int n; long long k;
         scanf("%d %lld",&n,&k);
         int arr[n];
         int c=0;
         long long sum=0;

         int max=0;
         for(int i=0; i<n ; i++)
         {
            scanf("%d",&arr[i]);
            
         
            if(arr[i]>max)
            {
                max=arr[i];
            }

             
           }  
           
           for( int i=0; i<n; i++)
           {
             sum+=arr[i];
             if(sum-max<=k)
             c++;

             else break;
           }


             
           
            

         printf("%d\n",c);
    }
}