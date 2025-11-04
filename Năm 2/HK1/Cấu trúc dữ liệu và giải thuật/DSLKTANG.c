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

int TangDan(Node* &head)
{
    if(head -> next == NULL || head == NULL)
        return 1;
    Node* p = head;
    while(p -> next != NULL)
    {
        if(p -> info > p -> next -> info)
            return 0;
        p = p -> next;
    }
    return 1;
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

    if (TangDan(head))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
    