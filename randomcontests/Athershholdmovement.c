#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);

    for( int i=0; i<t; i++)
    {

        int n,k; scanf("%d %d",&n,&k);
        int a[n];
        

        if(n-k>1)
        {

            for( int j=0; j<n; j++)
         {

            if(j<k)
            {
                
                
                    a[j]=0;
                    /* code */
                
                
               
            }

           else 
           {

          if(j%2==0 || a[k]==0)
           
          {
            a[j]=1;
           
         

          }
          else a[j]=0;

           }
         } 

       
         
            for( int j=0; j<n; j++)
            {
                printf("%d",a[j]);
            }

            printf("\n");
        }

        else printf("-1\n");

       

    }
}