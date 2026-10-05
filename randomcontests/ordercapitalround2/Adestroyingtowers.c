#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        int n; scanf("%d",&n);
        int arr[n]; int sum=0;
        for(int i=0 ; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(int i=0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                arr[i+1]=arr[i];
            }
        }

          for(int i=0 ; i<n; i++)
        {
            sum+=arr[i];
        }

        printf("%d\n",sum);
    }





    return 0;
}
