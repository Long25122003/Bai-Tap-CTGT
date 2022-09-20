#include <stdio.h>

void sapxep(int a[] , int n);
void inmh(int a[] , int n);
void sapxepphandoan(int a[] , int n);
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
    sapxep(a,n);
    inmh(a,n);
    sapxepphandoan(a,n);
}
void sapxep(int a[] , int n)
{
    int i , j;
    for (i = 0 ; i < n-1 ; i++)
   {
    for(j = n -1 ; j > i ; j--)
    if (a[j] < a[j-1])
    {
        int tt = a[j];
        a[j] = a[j-1];
        a[j-1] = tt;

    }
   }

}
void inmh(int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    printf("%d" , a[i]);
    
}
