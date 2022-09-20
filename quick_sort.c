#include <stdio.h>

void sapxep(int a[] , int left , int right);
void inmh(int a[] , int n);

int main()
{
     int i , j , n;
    int a[100];
    int left , right;
    //i = left ;
    //j = right;

    printf("Nhap n = ");
    scanf("%d" , &n);

    for(i = 0 ; i < n ; i++)
    {
        printf("a[%d]= " , i);
        scanf("%d", &a[i]);
    }
    sapxep(a,0,n);
    inmh(a,n);
      return 0;
      
}
void sapxep(int a[] , int left , int right)
{
    int i , j , x;
    x = a[(left+right)/2];
    i = left ; j = right;
    do
    {
        while (a[i] < x)

        {
           i++;
        }
        while (a[j] > x)
        {
            j--;
        }
        if (i <= j)
        {
            int tt = a[i];
            a[i] = a[j];
            a[j] = tt;
            i++ ; j--;
        }         
    } while (i <= j);
    if (left < j)
    sapxep(a,left,j);
    if (i < right)
    sapxep(a,i,right);
    
}
void inmh(int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    printf("%d" , a[i]);
}
