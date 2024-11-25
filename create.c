#include "create.h"

//创建表头
Node *creatlist()
{
    Node *headNode = (Node *)malloc(sizeof(Node));
    if(headNode == NULL)
    exit(1);
    //headNode->data = 1
    //注释头节点数据为1的目的：保持头节点为空表头，不被初始化为1（数据若需要被使用，则必须初始化）
    headNode->next = NULL;
    return headNode;
}

//创建节点
Node *creatNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if(newNode == NULL)
    exit(1);
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}