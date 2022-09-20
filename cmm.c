#include <stdio.h>
#include <stdlib.h>
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
void removeFirts(list *l){
    node* tt = l->pHead;
    l->pHead = l->pHead->pNext;
    free(tt);
    if (l->pHead == NULL){
        l->pTail = NULL;
    }
}
int selectX(list* l, int x){
    node* i = l->pHead;
    int d = 0;
    while((i != NULL)){
        if(i->value == x) d++;
        i = i->pNext;
    }
    return d;
}
int main(){
    list l;
    int n;
    printf("Nhap N: ");
    scanf("%d",&n);
    khoitao(&l);
    for(int i =0; i < n; i++){
        int x;
        printf("Nhap a[%d]",i);
        scanf("%d",&x);
        addnode(&l,x);
    }
    int x;
    printf("Nhap x: ");
    scanf("%d",&x);
    int d = selectX(&l,x);
    printf("%d xuat hien %d lan\n",x,d);
    node* dau = l.pHead;
    while(dau != NULL){
        printf("%d ",dau->value);
        dau = dau->pNext;
    }
    return 0;
}