#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        int n; scanf("%d",&n);
        int ce=0,co=0;
  

        int arr[n];
        for( int i=0; i<n; i++)
        {
           scanf("%d",&arr[i]);
           if(arr[i]%2==0) ce++;
           else co++;

      
        }

        if(ce==0 || co==0)
        {
            printf("0\n");
            continue;
        }

        if( ce==co) printf("%d\n",ce+co);
        else
        {
            if(ce<co) printf("%d\n",ce+ce+1);
            else printf("%d\n",co+co+1);
        }

 
      
        

    }




    return 0;
}