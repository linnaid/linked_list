#include"create.h"

//定位给定值所对应的节点并进行修改
void changeNode(Node *headNode, int changeData, int posData)
{
    Node *p = headNode;
    if(p->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    else
    {
        while(p->data != posData)
        {
            p = p->next;
            if(p == NULL)
            {
                printf("未找到所给值*_*\n");
                return;
            }
        }
        p->data = changeData;
    }
}

//定位输入值所对应的节点并进行自主修改
void changeNodeSecond(Node *headNode)
{
    Node *p = headNode;
    int posData, changeData;
    printf("请输入所要寻找的节点数据：");
    scanf("%d",&posData);
    printf("请输入改动后的数据：");
    scanf("%d",&changeData);
    if(p->next == NULL)
    {
        printf("链表为空\n");
        return;
    }
    else
    {
        while(p->data != posData)
        {
            p = p->next;
            if(p == NULL)
            {
                printf("未找到所给值*_*\n");
                return;
            }
        }
        p->data = changeData;
    }
}