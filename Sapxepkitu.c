#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    

    int i ,j , n;
    char a[50];
    char tt ;
    printf("Nhap mang = ");
    gets(a);
    for (i = 0 ; i < strlen(a) ; i++)
       for(j = i+1 ; j < strlen(a) ; j++)
         if (a[i] > a[j])
            {
            tt = a[i];
            a[i] = a[j ];
            a[j] = tt;         
            }
    puts(a);
    return 0;
}
