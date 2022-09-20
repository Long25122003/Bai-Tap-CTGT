#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>

void sapxep(int a[] , int n);
void inmh(int a[] , int n);
int timmax(int a[] , int n);
int timmin(int a[] , int n);
bool kiemtra(int n);
int demnguyento(int a[], int n);
int solanxh(int a[] , int n , int x);


int main()
{
    int i , j , n;
    int a[100];
    int x;


   


    printf("Nhap n = ");
    scanf("%d" , &n);
     printf("\nNhap x: ");
    scanf("%d", &x);

    for(i = 0 ; i < n ; i++)
    {
        printf("a[%d]= " , i);
        scanf("%d", &a[i]);
    }
    sapxep(a,n);
    inmh(a,n);
    printf("\n Max cua mang la : %d" , timmax(a,n));
    printf("\n Min cua mang la : %d" , timmin(a,n));
    kiemtra(n);
    int dem = demnguyento(a,n);
    printf ("\nSo Nguyen luong so nguyen to la : %d", dem);
      int SoLanX = solanxh(a, n, x);
    printf("\nSo lan xuat hien cua x la %d", SoLanX);
    return 0;
   
}
void sapxep(int a[] , int n)
{
   int i , j ;
   printf ("sap xep day gg so la :");
   for (i = 0 ; i < n ; i++)
   {
    for ( j = i + 1 ; j < n ; j++)
    {
        if (a[i] < a[j])
        {
            int tt = a[i];
            a[i] = a[j];
            a[j] = tt;
        }
    }
   }

}
int timmax(int a[] , int n)
{
    int max = a[0];
    for (int i = 1 ; i < n ; i++)
    if (max < a[i])
    max = a[i];
    return max;
}

int timmin(int a[] , int n)
{
    int min = a[0];
    for (int i = 1 ; i < n ; i++)
    if (min > a[i])
    min = a[i];
    return min;
}

bool kiemtra(int n)

{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)  // nếu là số chẵn
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)   // kiểm tra các số lẻ
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int demnguyento(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(kiemtra(a[i]) == true && a[i] < 100)
        {
            dem++;
        }
    }
    return dem;
}
int solanxh(int a[] , int n , int x)
{
    int dem=0;
    for(int i = 0; i < n ; i++)
    {
        if (a[i] == x)
        {
            dem++;
        }
    }
    return dem;
}


void inmh(int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    printf("%d" , a[i]);
   
    
}