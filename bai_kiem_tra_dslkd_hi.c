#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node{
    int value;
    struct Node *pNext;
};
typedef struct Node node;
typedef struct list{
    node* pHead;
    node* pTail;
} list;
void khoitao(list* l){
    l->pHead = NULL;
    l->pTail = NULL;
}
void add(list* l, node *p){
    if (l->pHead == NULL){
        l->pHead = p;
        l->pTail = p;
    }
    else{
        node* tt = l->pTail;
        l->pTail = p;
        tt->pNext = p;
    }
}
void addnode(list* l,int x){
    node* tt = (node*) malloc(sizeof(node*));
    tt->value = x;
    tt->pNext = NULL;
    add(l,tt);
}

node* timkiem(list *l , int x)
{
    node *p;
    p = l->pHead;
    while ( (p!=NULL) && (p->value != x))
    {
       p = p->pNext;
    }
    return p;
    
}
/*void xoakhoa(list *l , int value)
{
    node *p ;
    for(node *k = l->pHead ; k != NULL ; k =k->pNext)
    {
        if(k->value == value)
        {
            p->pNext = k->pNext;
            free k;
            return;
        }
        p = k;

    }
}*/

void sapxep(list *l){
    system("cls");
    node* i = l->pHead;
    while ( i != NULL){
        node* j = i->pNext;
        while(j != NULL){
            if (i->value > j->value){
                int tt = i->value;
                i->value = j->value;
                j->value = tt;
            }
            j = j->pNext;
        }
        i=i->pNext;
    }
    
    i = l->pHead;
    while(i != NULL){
        printf("%d ",i->value);
        i = i->pNext;
    }
   
}

int selectPrimeNumber(list* l){
    node* i = l->pHead;
    while((i != NULL)){
        int k = i->value;
        int kt = 0;
        if (k == 1) kt =1;
        for(int i =2; i <= sqrt(k); i++){
            if ( k % i == 0){
                kt = 1;
                break;
            }
        }
        if (kt == 0) printf("%d ",k);
        i = i->pNext;
    }
    return 0;
}


int main(){
    list l;
    int n;
    printf("\n Cau 1 : Nhap danh sach lien ket don :");
    printf("\nNhap N: ");
    scanf("%d",&n);
    khoitao(&l);
    for(int i =0; i < n; i++){
        int x;
        printf("Nhap a[%d]: ",i);
        scanf("%d",&x);
        addnode(&l,x);
    }
    int x;
    printf("\n Cau 2 : Tim Khoa K :");
     printf("\nNhap gia tri tim kiem: ");
    scanf("%d",&x);
    node *p;
    p = timkiem(&l,x);
    if (p == NULL)
    {
        printf("\n Khong Tim thay x !!!");
    }else{
        printf("\n Tim Thay Ket qua %d:", x);
    }
    
     //xoakhoa(&l,4);

     printf("\n Cau 4 : Sap xep danh sach :");  
    printf("\n Danh sach sap xep la:");
    sapxep(&l);
    printf("\n Cau 5 : In ra Cac So Nguyen To la :");
    printf("\n Cac so nguyen to la :");
    selectPrimeNumber(&l);
   

    return 0;
}