#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
struct Node{
    int data;
    struct Node *pNext;
};
typedef struct Node Node;
typedef struct List{
Node *pHead;
Node *pTail;
} List;
//khoi tao list
void IntiList(List *l){
	l->pHead = l->pTail = NULL;
}
//tao node
Node *GetNode(int value){
	Node *p = (struct Node*) malloc(sizeof(struct Node));
	if(p == NULL){
		return NULL;
	}
	p->data = value;
	p->pNext = NULL;
	return p;
}
void InsertTail(Node *p,List *l){
	if(l->pHead == NULL){
		l->pHead = l->pTail = p;
	}else{
		l->pTail->pNext = p;
		l->pTail = p;
	}
}
void Nhap(List *l){
	char temp[10];
	while(""){
		printf("\n Nhap so nguyen: ");
				fflush(stdin);
		gets(temp);
		if(strcmp(temp,"#") == 0){
			break;
		}
		int tmp = atoi(temp);
		Node *p= GetNode(tmp);
		InsertTail(p,l);
	}
}
void sapxep(List *l)
{
	 system("cls");
    Node* i = l->pHead;
    while ( i != NULL){
        Node* j = i->pNext;
        while(j != NULL){
            if (i->data > j->data){
                int tt = i->data;
                i->data = j->data;
                j->data = tt;
            }
            j = j->pNext;
        }
        i=i->pNext;
    }
}
void Xuat(int x ,List *l){

   Node *ptr = l->pHead;
	if(x==1) printf("\n Danh sach sau khi nhap : ");
	else if(x==2) printf("\n Danh sach cac so sau khi sap xep : ");
	else printf("\n Danh sach cac so nguyen to la  : ");
   while(ptr != NULL) {        
      printf("  %d ",ptr->data);
      ptr = ptr->pNext;
   }
}
void sochinhphuong(List *l)
{
	Node *ptr = l->pHead;
	while (ptr != NULL)
	{
		int x = ptr->data;
		int h=(int)sqrt(x);
		if(h == sqrt(x)){
			printf("%d " , x);
		}
		ptr = ptr->pNext;
	}	
}
int main(){
	int a;
	List l;
	printf("\n 1. Khoi tao danh sach.");
	printf("\n 2. Sap xep danh sach ");
	printf("\n 3. In ra danh sach cac so chinh phuong.");
	printf("\n 0. Thoat");
	do{
		printf("\n Nhap cu phap: ");
		scanf("%d",&a);
		switch(a){
			case 1: 
				IntiList(&l);
				Nhap(&l);  
				Xuat(a,&l);
				break;
			case 2:
				sapxep(&l);
				Xuat(a,&l);
				break;
			case 3:
			    printf("So Chinh Phuong la:  ");
				sochinhphuong(&l);
				
				break;
		}
	}while(a!=0);
	return 0;
}