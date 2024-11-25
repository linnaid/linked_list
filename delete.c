#include"create.h"

//表头删除
void deleteNodeByHead(Node *headNode)
{
    Node *deleteNode = headNode->next;
    headNode->next = deleteNode->next;
    free(deleteNode)
    deleteNode = NULL;
}

//表尾删除
void deleteNodeByTail(Node *headNode)
{
    Node *tailNode = headNode;
    Node *tailNodeFront = NULL;
    if(tailNode->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    else
    {
        while(tailNode->next != NULL)
        {
            tailNodeFront = tailNode;
            tailNode = tailNode->next;
        }
        free(tailNode)
        tailNode = NULL;
        tailNodeFront->next = NULL;
    }
}

//指定位置删除
void deleteNodeByPos(Node *headNode, int posData)
{
    Node *posNode = headNode;
    Node *posNodeFront = NULL;
    if(posNode->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    else
    {
        while(posNode->data != posData)
        {
            posNodeFront = posNode;
            posNode = posNode->next;
            if(posNode->next == NULL)
            {
                printf("无法找到该元素\n");
                return;
            }
        }
        posNodeFront->next = posNode->next;
        free(posNode)
        posNode = NULL;
    }
}