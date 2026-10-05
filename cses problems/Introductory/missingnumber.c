#include<stdio.h>
int main()
{
   
    long long n;
    scanf("%d",&n);
   long long s=(n*(n+1))/2;

   long long as=0;
   int arr[n-1];
   for( int i=0; i<n-1; i++)
   {
      scanf("%d",&arr[i]);

      as+=arr[i];
   }

   printf("%lld\n",s-as);
    return 0;
}