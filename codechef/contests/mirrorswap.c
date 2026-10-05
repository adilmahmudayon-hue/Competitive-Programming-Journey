#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[2*n];
        for(int i=0; i<2*n; i++)
        {
            scanf("%d",&arr[i]);
        }

        int s=0;


          for(int i=0; i<n; i++)
        {
            if(arr[i]<arr[2*n-1-i])
            {
                int temp=arr[i];
                arr[i]=arr[2*n-1-i];
                arr[2*n-1-i]=temp;
            }

            s+=arr[i];

        }

        printf("%d\n",s);


    }





    return 0;
}