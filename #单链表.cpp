#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}LNode,*LinkList;
int length_C=0;

LinkList InitLNode(LNode* pHeader,int len){
    int i;
    LNode *pNewNode;
    pHeader->next=pHeader;

    LNode *pCurNode;

    pCurNode = pHeader;

    for(i=0;i<len;i++)
    {
        pNewNode = (LNode*)malloc(sizeof(LNode));
        scanf("%d",&pNewNode->data);
        pCurNode->next = pNewNode;
        pCurNode = pNewNode;
    }
    pCurNode->next = pHeader;
    return pHeader;
}

void Display(LNode *pHeader)
{

        LNode *pCurNode;
        pCurNode=pHeader;
        while(pCurNode->next!=pHeader)
        {
            pCurNode = pCurNode->next;
            printf("%d ",pCurNode->data);
        }
}

int main()         // 8      1 2 3 4 5 6 7 8
{
    LNode *A;
    int length_A;
    A = (LNode*)malloc(sizeof(LNode));
    scanf("%d",&length_A);
    InitLNode(A,length_A);
    Display(A);
    return 0;
}