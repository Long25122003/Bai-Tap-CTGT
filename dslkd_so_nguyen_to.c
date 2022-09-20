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
void removeFirts(list *l){
    node* tt = l->pHead;
    l->pHead = l->pHead->pNext;
    free(tt);
    if (l->pHead == NULL){
        l->pTail = NULL;
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


/*void sapxep(list *l){
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
    printf("The linked list after sort: ");
    i = l->pHead;
    while(i != NULL){
        printf("%d ",i->value);
        i = i->pNext;
    }
    printf("\n");
    system("pause");
}*/

int main(){
    list l;
    int n;
    printf("Nhap N: ");
    scanf("%d",&n);
    khoitao(&l);
    for(int i =0; i < n; i++){
        int x;
        printf("Nhap a[%d]: ",i);
        scanf("%d",&x);
        addnode(&l,x);
    }
    //sapxep(&l);
   selectPrimeNumber(&l);
    return 0;
}