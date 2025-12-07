#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int info;
    struct Node *next;
} Node;

Node* TaoNut(int x) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->info = x;
    p->next = NULL;
    return p;
}

void ChenCuoi(Node** head, int x)
{
    Node* p = TaoNut(x);
    if (*head == NULL)
        *head = p;
    else
    {
        Node* q = *head;
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

void XoaDanhSach(Node** head, int x) 
{
    Node* temp = *head;
    Node* prev = NULL;

    while (temp != NULL) 
    {
        if (temp->info == x) 
        {
            if (prev == NULL) 
                *head = temp->next;
            else 
                prev->next = temp->next;
            free(temp);
            return; 
        }
        prev = temp;
        temp = temp->next;
    }
}

void InDanhSach(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->info);
        if (temp->next != NULL)
            printf(" ");
        temp = temp->next;
    }
    printf("\n");
}

int main() 
{
    int n, x;
    scanf("%d %d", &n, &x);

    Node* head = NULL;
    for (int i = 0; i < n; i++) 
    {
        int value;
        scanf("%d", &value);
        ChenCuoi(&head, value);
    }

    XoaDanhSach(&head, x);
    InDanhSach(head);

    return 0;
}
