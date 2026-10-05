#include<stdio.h>
#include<string.h>
int main()
{
    int t; scanf("%d",&t);

    while(t--)
    {
        int n; scanf("%d",&n);

        char str[n];
        char s;
        
         
            scanf("%s",str);

            for(int i=0; i<n; i++)
            {
                s=str[i];
               
             for(int i=i+1; i<n; i++)
             {
                if(str[i]==s) printf("%c ",str[i]);
            
                
             }
            
            }
            


            
            

        


        

       
    }




    return 0;
}