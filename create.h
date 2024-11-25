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

Node *creatlist();
Node *creatNode(int data);



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