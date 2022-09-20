#include <stdio.h>
#include <stdlib.h>

struct linkedlist
{
    int data;
    struct linkedlist *next;
};

typedef struct linkedlist *node;
node khoitaonode(int value)
{
    node temp;
    temp = (node)malloc(sizeof(struct  linkedlist));
    temp ->next = NULL; // cho next trỏ tới null
    temp ->data = value ; // Gán giá trị cho node
    return temp ; //Trả về node mới đã có giá trị
}
node themvaodau(node head , int value)
{
    node temp = khoitaonode(value); // khởi tạo node temp với data = value
    if (head == NULL)
    {
        head = temp;
    }else{
        temp ->next = head ; // Trỏ next của temp = head hiện tại
        head = temp; // đổi head hiện tại = temp < vì temp bây h là team mới >
    }
    return head;
}
node themvaocuoi(node head , int value)
{
    node temp,p;// Khai báo 2 node tạm temp và p
    temp = khoitaonode(value);//Gọi hàm createNode để khởi tạo node temp có next trỏ tới NULL và giá trị là value
    if(head == NULL){
        head = temp;     //Nếu linked list đang trống thì Node temp là head luôn
    }
    else{
        p  = head;// Khởi tạo p trỏ tới head
        while(p->next != NULL){
            p = p->next;//Duyệt danh sách liên kết đến cuối. Node cuối là node có next = NULL
        }
        p->next = temp;//Gán next của thằng cuối = temp. Khi đó temp sẽ là thằng cuối(temp->next = NULL mà)
    }
    return head;
}
node themvaods (node head , int value , int position )
{
    if (position == 0 || head == NULL)
    {
          head = themvaodau(head, value); // Nếu vị trí chèn là 0, tức là thêm vào đầu
    }else{
        // Bắt đầu tìm vị trí cần chèn. Ta sẽ dùng k để đếm cho vị trí
        int k = 1;
        node p = head;
        while(p != NULL && k != position){
            p = p->next;
            ++k;
        }
 
        if(k != position){
            // Nếu duyệt hết danh sách lk rồi mà vẫn chưa đến vị trí cần chèn, ta sẽ mặc định chèn cuối
            // Nếu bạn không muốn chèn, hãy thông báo vị trí chèn không hợp lệ
            head = themvaocuoi(head, value);
            // printf("Vi tri chen vuot qua vi tri cuoi cung!\n");
        }else{
            node temp = khoitaonode(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return head;
}

node InitHead(){
    node head;
    head = NULL;
    return head;
}
node Input(){
    node head = InitHead();
    int n, value;
    do{
        printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
    }while(n <= 0);
 
    for(int i = 0; i < n; ++i){
        printf("\nNhap gia tri can them: ");
        scanf("%d", &value);
        head = themvaocuoi(head, value);
    }
    return head;
}



int main(){
    printf("\n==Tao 1 danh sach lien ket==");
    node head = Input();
   
 
    printf("\n==Thu them 1 phan tu vao linked list==");
    head = themvaods(head, 100, 2);
  
 
   
 
}