#include <stdio.h>
#include <conio.h>
#define max 100

void Nhapmang(int A[],int n)
{
    printf("Nhap n = ");
    scanf("%d" , &n);
    for (int i = 0 ; i < n ; i++)
    {
        printf("Phan tu %d = " , i);
        scanf("%d" , &A[i]);
    }
}

void sapxep(int A[],int n)
{
    for (int i = 0 ; i < n ; i++)
    {
         for(int j = i+1 ; j < n ; j++)
         {
             if (A[i] < A[j])
             {
                 int tt = A[i];
                 A[i] = A[j];
                 A[j] = tt;
             }
         }
    }
}
void Xuatmang(int A[],int n)
{
    
    for (int i = 0; i < n ; i++)
    
        printf("%d" , A[i]);
    
}

int main()
{
    int A[max] , n;
    Nhapmang(A,n);
    sapxep(A,n);
    Xuatmang(A,n);
    getch();
    return 0;
}
