#include "create.h"

//头插法
void insertNodeByHead(Node *headNode, int data)
{
    Node *newNode = creatNode(data);
    headNode->next = newNode;
    newNode->next = NULL;
}

//尾插法
void insertNodeByTail(Node *headNode, int data)
{
    Node *newNode = creatNode(data);
    Node *tailNode = headNode;
    while(tailNode->next != NULL)
    {
        tailNode = tailNode->next;
    }
    tailNode->next = newNode;
}

//指定位置插入
void insertNodeByPos(Node *headNode, int insertData, int posData)
{
    Node *posNode = headNode->next;
    Node *posNodeFront = headNode;
    if(posNode == NULL)
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
                printf("未找到该数据\n");
                return;
            }
        }
        Node *newNode = creatNode(insertData);
        newNode->next = posNode;
        posNodeFront->next = newNode;
    }
}