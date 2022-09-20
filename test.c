#include <stdio.h>

void sapxep(int a[] , int n);

void inma(int a[] , int n);

int  main()
{
      int i , j ,min, n;
    int a[50];

    printf("Nhap n = ");
    scanf("%d" , &n);

    printf("\n Nhap mang :");
    for (i = 0 ; i < n ; i++)
     {
        printf("\na[%d] = " , i+1);
        scanf("%d", &a[i]);
     }
sapxep(a,n);
inma(a,n);
}
void sapxep(int a[] , int n)
{
    int min;
      for (int i = 0 ; i < n-1 ; i++)
     {
     min=i;
     for (int j = i + 1 ; j < n ; j++)
     if (a[j] < a[min])
    
    
     min=j;



    int tt = a[i];
    a[i] = a[min];
    a[min] = tt;
     }

}
void inma(int a[] , int n)
{
    printf("Sap xep theo chon truc tiep");
       
     for(int i = 0 ; i < n ; i++)
     
        printf("%d ",a[i]);
}