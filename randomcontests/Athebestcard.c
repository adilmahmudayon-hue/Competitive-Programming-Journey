#include<stdio.h>
int main()
{
    int t ; scanf("%d",&t);
    while(t--)
    {

        int n; scanf("%d",&n);

        int w1=0,w2=0;   
        int win;
        for( int i=2;i<=n+1; i++)
        {
            int c1=i,c2=i+1;
            if(c2%c1==0)
            {
                 w1++;
                 win=i;
            }

            else 
            {
                w2++;
                win=i+1;
            }
        }

        if(w1>0 || w2>0) printf("YES\n");
        else  printf("NO\n");


    }




    return 0;
}