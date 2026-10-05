#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    if(n<4 && n!=1) {
        printf("NO SOLUTION\n");
        return 0;
    }
 
    if(n%2==0)
    {
       for( int i=2; i<=n;i+=2)
     {
         printf("%d ",i);
     } 

      for( int i=1; i<=n;i+=2)
     {
         printf("%d ",i);
     } 

    }

    else 
    {
        
    
       for( int i=2; i<=n;i+=2)
     {
         printf("%d ",i);
     } 

      for( int i=1; i<=n;i+=2)
     {
         printf("%d ",i);
     } 
    
    }
    


    return 0;
}