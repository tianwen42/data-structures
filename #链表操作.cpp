#include <stdio.h>
#include <stdlib.h>
//不是链表的结构体
//链表中一个节点的结构体
typedef struct SListNode {
	int data; // 值
	struct SListNode *Next; // 指向下一个结点
} SListNode;

void SListInit(SListNode **ppFirst)//初始化
{
	//assert(ppFirst != NULL);
    SListNode *pNode = (SListNode *)malloc(sizeof(SListNode));
    pNode->data = 0;
    pNode->Next = NULL;
	*ppFirst = NULL;
}

//打印链表
void SListPrint(SListNode *First)
{
	for (SListNode*cur = First; cur != NULL; cur = cur->Next)
	{
		printf("%d-->", cur->data);
	}
	printf("\n");
	return;
}

static SListNode* CreateNode(int data)
{
	SListNode*node = (SListNode*)malloc(sizeof(SListNode));
	node->data = data;
	node->Next = NULL;
	return node;
}
// 尾部插入
void SListPushBack(SListNode** ppFirst, int data)
{
	//assert(ppFirst != NULL);
	SListNode *node = CreateNode(data);
	if (*ppFirst == NULL)//判断链表不为空
	{
		*ppFirst = node;
		return;
	}
	//找链表中的最后一个节点
	SListNode* cur = *ppFirst;
	while (cur->Next != NULL)
	{
		cur = cur->Next;
	}
	cur->Next = node;//插入新申请的节点
}

void main(){
	SListNode **node;

}