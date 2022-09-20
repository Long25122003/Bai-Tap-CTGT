#include <stdio.h>
void chentructiep(int a[] , int n);
void inmh(int a[] , int n);


int main()
{
    int i , j , n;
    int a[100];

    printf("Nhap n = ");
    scanf("%d" , &n);

    for(i = 0 ; i < n ; i++)
    {
        printf("a[%d]= " , i);
        scanf("%d", &a[i]);
    }
   
   
    chentructiep(a,n);
    inmh(a,n);
}
void chentructiep(int a[] , int n)
{
    int vitri , i;
    int x;

    for (i = 1 ; i < n ; i++)
    {
        x = a[i] ; vitri=i-1;

        while ((vitri >= 0) && (a[vitri] > x))
        {
            a[vitri + 1] = a[vitri];
            vitri--;
        }
        a[vitri + 1] = x;
        
    }
}
void inmh(int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    printf("%d" , a[i]);
}