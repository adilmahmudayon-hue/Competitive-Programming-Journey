#include<stdio.h>
#include<string.h>
int main()
{
    int t; scanf("%d",&t);

    for( int i=0; i<t; i++)
    {
  
       char str[100];
       scanf("%s",str);

       int a=strlen(str);
       int f0,f1;
       
       for(int i=0;i<a; i++)
       {
         if(str[i]=='0')
         {
           f0=i;
           break;
            
         }  
        
       }

       for(int i=0;i<a; i++)
       {
         if(str[i]=='1')
         {
          

            f1=i;
            break;
        
         }  
        
       }

    
       for(int i=0;i<a; i++)
       {
        if(i==f0 || i==f1) continue;

         printf("%c",str[i]);
       }
  
      

       printf("\n");
     



   
    
       
     









    }

     

}