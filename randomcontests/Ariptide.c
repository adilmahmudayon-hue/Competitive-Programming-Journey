#include<stdio.h>
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int max,min,mid;
        int s=0;
 
        if((a==b) || (b==c) || (c==a))
        
        {
            printf("%d\n",s);
 
       
        }
 
         
         else
         {
            
            if(a>b)
          {
            if(a>c)
            {
                 max=a;
                 if(b>c)
                 {
                    min=c; mid=b;
                 } 
                 else 
                 {
                    min=b;
                    mid=c;
                 }
            }
             else
             {
                max=c;
                min=b;
                mid=a;
             } 
          }
         else
         {
            if(b>c) 
            {
                max=b;
                if(a>c)
                {
                    min=c;
                    mid=a;
                } 
                else
                {
                    min=a;
                    mid=c;
                } 
            }
            else
            {
                max=c;
               min=a;
               mid=b;
            } 
         }
 
 
 
      
         
        if(max-mid>mid-min)
        printf("%d\n",mid-min);
        else printf("%d\n",max-mid);
 
         }
 
         
 
 
    }
 
   
 
 
 
    return 0;
}
   



