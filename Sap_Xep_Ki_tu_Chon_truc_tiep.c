#include <stdio.h>
#include <string.h>
int main()
{
    int i , j , n;
    int min;
    char a[50];
    char tt;

    printf("Nhap mang ky tu = ");
    gets(a);
    for (i = 0 ; i < strlen(a) ; i++)
    {
       min = i;
       for (j = i+1 ; j < strlen(a) ; j++)
       if (a[j] > a[min])
        min = j;
       int tt = a[i];
       a[i] = a[min];
       a[min] = tt;
    }
    puts(a);
    return 0 ;

}