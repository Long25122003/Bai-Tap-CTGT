#include <stdio.h>
typedef struct sinhvien{
    char hoten[30];
    char lop[10];
    float diem1;
    float diem2;
    float dtb;
} sv;
int main(){
    sv s[100];
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Sinh vien %d: \n",i+1);
        fflush(stdin);
        printf("Ho ten: ");
        fflush(stdin);
        gets(s[i].hoten);
        printf("Lop: ");
        fflush(stdin);
        gets(s[i].lop);
        printf("Diem 1: ");
        scanf("%f",&s[i].diem1);
        printf("Diem 2: ");
        scanf("%f",&s[i].diem2);
    }
    for(int i = 0; i < n; i++){
        s[i].dtb = (s[i].diem1+ s[i].diem2)/2;
    }
    for(int i = 0; i < n -1; i++){
        for(int j = n -1; j > i; j--)
            if ( s[j].dtb < s[j -1].dtb ){
                float tt = s[j].dtb;
                s[j].dtb = s[j-1].dtb;
                s[j-1].dtb = tt;
            }
    }
    for(int i = 0; i < n; i ++){
         printf("%s",s[i].hoten);
        printf(" %0.2f\n",s[i].dtb);
        
    }
    return 0;
}