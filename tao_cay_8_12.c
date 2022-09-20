#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
struct item {
    char id[20];
    char name[20];
    double scores;
};
struct Node {
    item key; //truong key cua du lieu
    Node *Left, *Right; //con trai va con phai
};
typedef Node *Tree;  //cay
 
int compare(item x, item y) { // so sanh 2 item theo key
    return strcmp(x.id, y.id);
}
 
item inputItem() {  // nhap 1 item
    item x;
    char id[20];
    printf("Enter id of Staff (q to quite): ");
    gets(x.id);
 
    if (strcmp(x.id, "q") == 0 || strcmp(x.id, "Q") == 0) {
        return x;
    }
 
    printf("Enter name of Staff: ");
    gets(x.name);
 
    printf("Enter wage of student:");
    scanf("%lf", &x.scores);
 
    //fflush(stdin);
    while (getchar() != '\n');
 
    return x;
}
 
void outItem(item x) {
    printf("%-20s %-20s %-3.2f \n", x.id, x.name, x.scores);
}
 
int insertNode(Tree &T, item x) // chen 1 Node vao cay
        {
    if (T != NULL) {
        if (compare(T->key, x) == 0)
            return -1;  // Node nay da co
        if (compare(T->key, x) > 0)
            return insertNode(T->Left, x); // chen vao Node trai
        else if (compare(T->key, x) < 0)
            return insertNode(T->Right, x);   // chen vao Node phai
    }
    T = (Node *) malloc(sizeof(Node));
    if (T == NULL)
        return 0;    // khong du bo nho
    T->key = x;
    T->Left = T->Right = NULL;
    return 1;   // ok
}
 
void CreateTree(Tree &T)        // nhap cay
        {
    item x;
    while (1) {
        printf("Enter a staff: ");
        x = inputItem();
        if (strcmp(x.id, "q") == 0 || strcmp(x.id, "Q") == 0)
            break;  // x = 0 thi thoat
        int check = insertNode(T, x);
        if (check == -1)
            printf("Staff is exits!");
        else if (check == 0)
            printf("Memory full");
 
    }
}
 
// Duyet theo LNR
void LNR(Tree T) {
    if (T != NULL) {
        LNR(T->Left);
        outItem(T->key);
        LNR(T->Right);
    }
}
 
Node* searchScores(Tree T, int scores)     // tim nut co diem < 4
        {
    if (T != NULL) {
        if (T->key.scores < scores) {
            Node *P = T;
            return P;
        }
        if (T->key.scores >= scores) {
            Node *node = searchScores(T->Left, scores);
            if (node != NULL)
                return node;
            else {
                return searchScores(T->Right, scores);
            }
        }
    }
    return NULL;
}
 
int delKey(Tree &T, item x)     // xoa nut co key x
        {
    if (T == NULL)
        return 0;
    else if (compare(T->key, x) > 0)
        return delKey(T->Left, x);
    else if (compare(T->key, x) < 0)
        return delKey(T->Right, x);
    else // T->key == x
    {
        Node *P = T;
        if (T->Left == NULL)
            T = T->Right;    // Node chi co cay con phai
        else if (T->Right == NULL)
            T = T->Left;   // Node chi co cay con trai
        else // Node co ca 2 con
        {
            Node *S = T, *Q = S->Left;