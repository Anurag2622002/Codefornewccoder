#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char s[50];
   int n,i,flag=1;
   char keywords[][10] = {"if","else","for","do","while"};
   int ksize = sizeof(keywords)/10;

   puts("Enter the identifier:");
   gets(s);

   for(i=0;i<ksize;i++)
   {
       if(strcmp(s,keywords[i])==0)
       {
           flag = 0;
           break;
       }
   }

   n = strlen(s);
   if(isdigit(s[0]) && flag)
    flag = 0;
   else if(flag)
   {
       for(i=0;i<n;i++)
       {
           if(s[i]=='_' || isalnum(s[i]));
           else
           {
               flag=0;
               break;
           }

       }
   }
   if(flag)
    puts("identifier is valid");
   else
    puts("identifier is not valid");
    return 0;
}