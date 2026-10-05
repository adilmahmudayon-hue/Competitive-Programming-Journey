#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        long long a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        long long s=a+b+c;
        long long max,min;
        long long range;

        if(a>b)
        {
            if(a>c)
            {
                max=a;
                if(b<c) min=b;
                else min =c;
            }
            else{
                max=c;
                if(b<a) min=b;
                else min=a;
            }
        }

        else 
        {
            if(b>c)
            {
                max=b;
                if(a<c) min=a;
                else min =c;
            }
            else{
                max=c;
                if(b<a) min=b;
                else min=a;
            }
        }

        range=max-min;

   
        
            if(s-max<max) 
            {
                long long nmax=s-max;
                range=nmax-min;
            }

        
            printf("%lld\n",range);

    }




    return 0;
}