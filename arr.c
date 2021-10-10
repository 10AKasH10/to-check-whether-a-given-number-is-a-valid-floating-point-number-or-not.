#include <stdio.h>
#define n 3
int main(){
    int a[n][n],b[n*n],c[n*n],k=0,l=0;
    printf("\n Enter element of 2D array :");
    for(int i=0; i<n ;i++)
    {
        for(int j=0; j<n ; j++)
        {
         scanf("%d",&a[i][j]);  
        }
    }
    printf("\n Given 2D array:  ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n ; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Row wise \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
         b[k]=a[i][j];
         k++;
        }
    }
    printf("\n Column wise \n");
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            c[l]=a[j][i];
            l++;
        }
        
    }
}