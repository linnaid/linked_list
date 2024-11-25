#include"create.h"

//打印链表
void printList(Node *headNode)
{
    Node *p = headNode->next;
    if(p == NULL)
    {
        printf("链表为空\n");
        return;
    }
    else
    while(p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
    printf("\n");
}