#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    scanf("%s",str);
    
    int c=1,maxi=1;
   
    for( int i=1; i<strlen(str); i++){
    if(str[i]==str[i-1])
    {
        ++c;
        if(maxi<c)
            maxi=c;
            

        
     }
    
     else c=1;
   }

    printf("%d\n",maxi);

    return 0;
}