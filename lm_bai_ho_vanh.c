#include <stdio.h>
#include<stdint.h>
int main()
{
    int a , b , c;
    int min , max;

    printf("Nhap 3 so nguyen :");
    printf("\nNhap a = ");
    scanf("%d" , &a);
    printf("\nNhap b = ");
    scanf("%d" , &b);
    printf("\nNhap c = ");
    scanf("%d" , &c);
   

    if((a < b ) && (a < c))
    {
        min = a;
        
    }
     if((c < b ) && (c < a))
    {
        min = c;
        
    }
     if((b < a ) && (b < c))
    {
        min = b;
        
    }

    if((a > b ) && (a > c))
    {
        max = a;
        
    }
     if((c > b ) && (c > a))
    {
        max = c;
        
    }
     if((b > a ) && (b > c))
    {
        max = b;
        
    }
    printf("\n In ra man hinh so lon nhat va nho nhat:");

    printf("\n Max = %d",max);
    printf("\n Min = %d",min);

}