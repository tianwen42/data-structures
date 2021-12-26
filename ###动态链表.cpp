#include"stdio.h"
#include"stdlib.h"
typedef struct Horse{
    int data;
    struct Horse *next;
}node;

//创建
node * initLink() {
    node * p = (node*)malloc(sizeof(node));//创建一个头结点
    node * temp = p;//声明一个指针指向头结点，用于遍历链表
    int i = 0;
    //生成链表
    for (i = 1; i < 10; i++) {
        //创建节点并初始化
        node *a = (node*)malloc(sizeof(node));
        a->data = i;
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}

node * append(node * p, int elem) {
    node * temp = p;//创建临时结点temp
    while (temp->next) {
        temp = temp->next;
    }
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = elem;
    newnode->next = NULL;
    temp->next = newnode;
    return p;
}

void display(node *p) {
    node *temp = p;//将temp指针重新指向头结点
    //只要temp指针指向的结点的next不是Null，就执行输出语句。
    while (temp->next) {
        temp = temp->next;
        printf("%d ", temp->data);
    }
    printf("\n");
}


node * del(node * p, int add) {
    node * temp = p;
    node * del = NULL;
    int i = 0;
    //遍历到被删除结点的上一个结点
    for (i = 1; i < add; i++) {
        temp = temp->next;
    }
    del = temp->next;
    temp->next = temp->next->next;//删除某个结点的方法就是更改前一个结点的指针域
    free(del);//释放
    return p;
}

void printList(node *L){
	node *p = L;
	while(p != NULL){
		printf("%-3d", p->data);
		p = p->next;
	}
	printf("\n");
}

int main() {
    node *p = NULL;
    int address;
    printf("初始化为：\n");
    p = initLink();
    display(p);
    printf("加入100：\n");
    p = append(p, 100);
    display(p);
    printf("删除元素3:\n");
    p = del(p, 3);
    display(p);

}
