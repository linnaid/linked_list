#include "create.h"

int main(void)
{
    printf("以下是链表的相关操作\n");
    printf("--------------------\n");
    printf("--------------------\n");
    Node *list = creatlist();
    printf("原始数据\n");
    insertNodeByHead(list, 1);
    printList(list);
    printf("表头法插入（逆序）\n");
    insertNodeByHead(list, 2);
    insertNodeByHead(list, 3);
    printList(list);
    printf("指定位置删除（数据2）\n");
    deleteNodeByPos(list, 2);
    printList(list);


    printf("表尾法插入（顺序）\n");
    insertNodeByTail(list, 4);
    insertNodeByTail(list, 5);
    insertNodeByTail(list, 6);
    printList(list);
    printf("表头删除\n");
    deleteNodeByHead(list);
    printList(list);

    printf("指定位置插入（在5的前面插入666）\n");
    insertNodeByPos(list, 666, 5);
    printList(list);
    printf("表尾删除\n");
    deleteNodeByTail(list);
    printList(list);

    printf("指定位置修改数据（将666修改成888）\n");
    changeNode(list, 888, 666);
    printList(list);
    changeNodeSecond(list);
    printList(list);

    printf("查询数据\n");
    int findData = 888;
    findNode(list, findData);
    printList(list);
    
    return 0;
}
