#include"stdio.h"
#include"node.h"
#include"stdlib.h"
/*
typedef struct _node{
    int value;
    struct _node *next;
}Node;
*/
int main(){
    int number;
    Node *head = NULL;
    do
    {
        scanf("%d", &number);
        if(number != -1){
            //add to Linked-list
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            //find the last node(走到最后的节点)
            Node *last = head;
            if(last){
                while(last->next ){
                last = last->next;
                }
                last->next = p;
            }else{
                head = p;
            }

        }
    } while (number != -1);
    return 0;
}