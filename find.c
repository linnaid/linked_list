#include"create.h"

//寻找指定数据的节点
void findNode(Node *headNode, int findData)
{
    Node *p = headNode;
    if(p->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    else
    {
        while(p->data != findData)
        {
            p = p->next;
            if(p == NULL)
            {
                printf("未找到指定数据\n");
                return;
            }
        }
        printf("找到该数据%d,存在于链表中\n",p->data);
    }
}