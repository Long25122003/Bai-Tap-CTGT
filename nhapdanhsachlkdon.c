#include <stdio.h>
#include <stdlib.h>
typedef struct nut{
    int data;
    int* next;
} node;
node* taonut(int x){
    node* tt = (node*) malloc(sizeof(node*));
    tt->data = x;
    tt->next = NULL;
    return tt;
}
node* themnutvaomang(node* nut,int x){
    node *tt = taonut(x);
    nut->next=tt;
    return tt;
}
int main(){
    int n,x;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Nhap a[0]: ");
    scanf("%d",&x);
    node* head = taonut(x);
    node* tail = head; 
    for(int i = 1; i < n; i++){
        printf("Nhap vao a[%d]: ",i);
        scanf("%d",&x);
        tail = themnutvaomang(tail,x);
    }   
	node *p = head;
	while (p != NULL){
		printf("%d ", p->data);
		p=p->next;
    }
}