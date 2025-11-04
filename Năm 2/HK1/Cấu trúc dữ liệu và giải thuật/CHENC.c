#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

Node* TaoNut(int x)
{
    Node* p = (Node*)malloc(sizeof(Node));
    p -> info = x;
    p -> next = NULL;
    return p;
}

void Duyet(Node* head)
{
    Node* p = head;
    while (p != NULL)
    {
        printf("%d ", p->info);
        p = p->next;
    }
    printf("\n");
}

void ChenCuoi(Node* &head, int x)
{
    Node* p = TaoNut(x);
    if (head == NULL)
        head = p;
    else
    {
        Node* q = head;
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    Node* head = NULL;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        ChenCuoi(head, x); 
    }

    Duyet(head);

    return 0;
}
    