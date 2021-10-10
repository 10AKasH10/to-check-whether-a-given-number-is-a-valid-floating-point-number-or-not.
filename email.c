#include<stdio.h>
 
int main()
{
 char c[20];
 int a1,a2;
 a1=a2=0;
 printf("\nEnter E-MAIL ID=");
 scanf("%s",&c);
    for(int i=0;c[i]!='\0';i++)
    {
       if(c[i]=='@'){
        a1=i;
       }
       else if(c[i]=='.'){
        a2=i;
       }
    }
    if(a1>3 && (a2-a1)>3){
    printf("\nvalid");
    }
    else{
    printf("\ninvalid");
    }
} 
 
