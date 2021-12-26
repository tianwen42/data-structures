#include"stdio.h"
#include"stdlib.h"
struct node{
    int             data;
    struct node*    next;
};

typedef struct node  node_t;
typedef struct node* nodeptr_t;


nodeptr_t NewLinkedList(int val) {
    // 建立第一个节点
    nodeptr_t head = NULL;
    head = (struct node *)malloc(sizeof(node_t));

    head->data = val;
    head->next = NULL;
    return head;
}


// 输入：链表的头节点
// 输出：链表的长度（节点个数）
int Length(nodeptr_t head) {
    int count = 0;
    nodeptr_t current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return(count);
}


void AppendNode(nodeptr_t head,int val) { //加节点

    struct node *current;
    // 获取最后一个指针的地址
    for (current = head; current->next != NULL; current = current->next);

    // 建立新节点，处理指针
    nodeptr_t newNode = (struct node *)malloc(sizeof(node_t));
    newNode->next = NULL;

    // 进行链接
    current->next = newNode;
}

void RemoveLast(nodeptr_t head) {  //remove last node
    int retval = 0;

    // 特殊情况处理
    if (head->next == NULL) {
        retval = head->data;
        free(head);
        return;
    }

    // 找出倒数第二个节点
    nodeptr_t current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // 删除最后一个节点
    free(current->next);
    current->next = NULL;
    return;
}

void Push(nodeptr_t* head, int val) {
    // 新建节点，存储数据
    nodeptr_t newNode;
    newNode = (struct node *)malloc(sizeof(node_t));
    newNode->data = val;

    // 让新建节点的 next 指向之前的头节点
    newNode->next = *head;
    // 将头节点指针指向刚刚新建的节点。
    *head = newNode;
}