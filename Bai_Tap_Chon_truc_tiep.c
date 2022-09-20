#include <stdio.h>
 

int main()
{
    int i , j ,min , n;
    int a[50];

    printf("Nhap n = ");
    scanf("%d" , &n);

    printf("\n Nhap mang :");
    for (i = 0 ; i < n ; i++)
     {
        printf("\na[%d] = " , i+1);
        scanf("%d", &a[i]);
     }
printf("Sap xep bang cach chon truc tiep la :");
   
    for (i = 0 ; i < n-1 ; i++)
     {
     min=i;
     for (j = i + 1 ; j < n ; j++)
     if (a[j] < a[min])
    
    
     min=j;



    int tt = a[i];
    a[i] = a[min];
    a[min] = tt;
    
     }
     for(i = 0 ; i < n ; i++)
     
        printf("%d ",a[i]);
     



     return 0;
     


}