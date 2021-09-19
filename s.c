 #include<stdio.h>
 #include<string.h>
int main()
{int flag=0,length;
 char i[10];
 printf("\nenter the number=");
 scanf("%s",&i);
 length=strlen(i);
 while(length--)
 {
     if(i [length]=='.')
     {
         flag=1;
         break;
     }
 }
 

 if(flag){
     printf("valid");
 }else{
     printf("invalid");
 }
    return 0;
}
