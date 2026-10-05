#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    for( int i=0; i<t; i++)
    {
        int n; scanf("%d",&n);
        int max=0,min=1000000000;

        int arr[n];

        for( int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);

        }

         for( int i=0; i<n; i++)
        {
            if(arr[i]>max)
             max=arr[i];

        }

          for( int i=0; i<n; i++)
        {
            if(arr[i]<min)
             min=arr[i];

        }

        int result=(max+1)-min;

        printf("%d\n",result);



        
        
    }




    return 0;
}