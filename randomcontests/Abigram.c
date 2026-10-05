#include<stdio.h>
int main()
{
    int t;
    
    scanf("%d",&t);

    for( int i=0; i<t; i++)
    {
        int k; scanf("%d",&k);

        long long arr[k];
        int b=0;
    
        for( int i=0; i<k; i++)
        {
            scanf("%lld",&arr[i]);
        }


         for( int i=0; i<k; i++)
        {

            if( k==1 && arr[i]>2)
             b++;


             for( int j=i+1; j<k; j++)
             {
                if(arr[i]>1 && arr[j]>1)
                {

                    b++;
                    i++;
                }

           

               



             }
           
        }

        if(b>0) printf("Yes\n");
        else printf("No\n");


    }


    return 0;
}