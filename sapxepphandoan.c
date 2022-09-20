#include <stdio.h>

void sapxepphandoan(int a[] , int n);
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
    sapxepphandoan(a,n);
    inmh(a,n);
}



void sapxepphandoan(int a[] , int n)
{
    int i , j;
    int left , right , k;
    left = 0 ; right= n-1 ; k = n-1;

    while(left<right)
    {
        for (j = right ; j > left ; j--)
         if (a[j] < a[j-1])
         {
         int tt = a[j];
           a[j] = a[j - 1];
           a[j - 1] = tt;
           k=j; 
         }
         left=k;
         for (j = left ; j < right ; j++)
         if (a[j] > a[j + 1])
         {
            int tt = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tt;
            k=j;
         }
          right=k;
    }
    

}

    void inmh(int a[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    printf("%d " , a[i]);
    
}
