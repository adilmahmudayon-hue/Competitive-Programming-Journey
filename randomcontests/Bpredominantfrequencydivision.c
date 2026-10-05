#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);

    for( int i=0; i<t; i++)
    {
        int n; scanf("%d",&n);

        int arr[n];
        int c1=0,c2=0,c3=0;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(int i=0; i<n; i++)
        {
           if(arr[i]==1) c1++;
           if(arr[i]==2) c2++;
           if(arr[i]==3) c3++;
        }

        if( c1==0 || c3==0)

        int min;

        if(n-c2 > n-c1 && n-c2 > n-c3) min=c2;

          else if(n-c1 > n-c2 && n-c1 > n-c3) min=c1;
          else min = c3;
    }


    return 0;
}