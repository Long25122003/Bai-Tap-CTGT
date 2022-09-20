#include <stdio.h>
int main()
{
    int n , i ;
    int a[50];

    printf("Nhap n = ");
    scanf("%d" , &n);
    printf("\nNhap mang la :");
    for (i = 0 ; i < n ; i++)
    {
        printf("\na[%d] = " , i);
        scanf("%d", &a[i]);
    }
    int k ;
    printf("Nhap phan tu K =  ");
    scanf("%d" , &k);
  /*  int dem = 0;
   for (i = 0 ; i < n ; i++)
   if (a[i] == k)
   {
       printf("in ra so k co trong mang : ");
       dem++;
       printf("in ra so lan xuat hien:");
   }else if (a[i] != k)
   {
       printf("Khong tim thay");
   
   }*/

   while ((i < n) && (a[i] != k))
   i++;

   if (i==n)
   {
       printf("khong tim thay");
   }

  

}