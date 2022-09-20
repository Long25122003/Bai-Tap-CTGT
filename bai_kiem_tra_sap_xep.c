#include <stdio.h>
#include <conio.h>
int main()
{
    int i ,j , n;
    int a[50];
    int tt ;

    printf("Nhap n =  ");
    scanf("%d" , &n);
    printf("\nNhap mang la :");
    for (i = 0 ; i < n ; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d" , &a[i]);
    }
    
    for ( i = 0 ;i < n ; i++ )
        for (j = i+1 ; j < n ; j++)
        
            if (a[i] > a[j])
            {
            tt = a[i];
            a[i] = a[j];
            a[j] = tt;         
            }
      for (i = 0 ; i < n ; i++)
      printf("%d" , a[i]);

}