#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int value;
    struct node *pNext;
} node;
typedef struct list{
    node *pHead;
    node *pTail;
} list;
void add(list* l, node *p){
    if (l->pHead == NULL){
        l->pHead = p;
        l->pTail = l->pHead;
    }
    else{
        p->pNext = l->pHead;
        l->pHead = p;
    }
}
void addnode(list* l,int x){
    node *tt = (node*) malloc(sizeof(node*));
    tt->value = x;
    add(l,tt);
}
int f(list* l){
    node *p ;
    if (l->pHead != NULL)
    {
        p = l->pHead;
        l->pHead= p->pNext;

        free(p);
        if (l->pHead == NULL)
        
            l->pTail =NULL;
    }
    return 0;
}
int main(){
    list l;
    int n;
    printf("Nhap N: ");
    scanf("%d",&n);
    for(int i =0; i < n; i++){
        int x;
        printf("Nhap a[%d]= ",i);
        scanf("%d",&x);
        addnode(&l,x);
    }
    printf("a\n");
    f(&l);
    node* dau = l.pHead;
    for(int i=0; i < n; i++){
        printf("%d ",dau->value);
        dau = dau->pNext;
    }
}