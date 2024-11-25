#ifndef CREATE_H
#define CREATE_H

#include <stdio.h>
#include <stdlib.h>

//创建结构体
typedef struct node
{
    int data;
    struct node *next;
}Node;

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


//可使用函数

//add:
void insertNodeByHead(Node *headNode, int data);
void insertNodeByTail(Node *headNode, int data);
void insertNodeByPos(Node *headNode, int insertData, int posData);

//delete:
void deleteNodeByHead(Node *headNode);
void deleteNodeByTail(Node *headNode);
void deleteNodeByPos(Node *headNode, int posData);

//change:
void changeNode(Node *headNode, int changeData, int posData);
void changeNodeSecond(Node *headNode);

//find:
void findNode(Node *headNode, int findData);

//print
void printList(Node *headNode);
#endif