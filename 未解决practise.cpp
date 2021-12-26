#include"stdio.h"
#include"stdlib.h"
typedef struct Link{
    int elem;
    struct Link *next;
}link;
link * linklist();
void display(link *p);
link * append_end(link *p);
link * delnode(link *p);

link * initlink(){
    link *p = (link *)malloc(sizeof(link));;
    link *temp = p;
    int i;
    temp->next = NULL;
    for(i=1;i<10;i++){
        link *current = (link *)malloc(sizeof(link));
        current->elem = i;
        current->next = temp->next;
        temp->next = current;
        temp = temp->next;
    }
    return p;
}

void display(link *p){
    link *current = p;
    while ( current->next )//这里曾经出错了，(current ！= null)错了
    {
        current = current->next;
        printf("%d ",current->elem);
    }
    printf("\n");
}

link * append_end(link *p,int elem){
    link *current = p;
    while(current->next){
        current = current->next;
    }
    link *newnode = (link *) malloc(sizeof(link));
    newnode->next = NULL;
    newnode->elem = elem;
    current->next = newnode;//这里曾经出现了一个错误
    current = current->next;
    return p;
}

link * delnode(link *p,int index) {
    link * current = p;
    int i;
    link * del = NULL;
    for ( i = 0; i < index; i++)
    {
        current = current->next;
    }
    del = current->next;
    current->next = current->next->next;
    free(del);
    return p;
}

int selectElem(link *p,int elem){
    link *current = p;
    int i = 1;
    while(current->next){
        current = current->next;
        if (current->elem == elem){
            return i;
        }
        i++;
    }
    return -1;
}

link * insertnode(link *p,int elem,int index){
    link *current = p;
    int i;
    for(i=0;i<index;i++){
        current = current->next;
    }
    link * newnode = (link *)malloc(sizeof(link));
    newnode->next = current->next;
    current->next = newnode;
    newnode->elem = elem;
    return p;
}
link * change_index(link * linlist,int index,int NewElem){
    link * current = linlist;
    int i;
    for(i=0;i<index;i++){
        current = current->next;
    }
    current->elem = NewElem;
    return linlist;
}

int main(){
    link *p = NULL;
    p = initlink();
    printf("初始值:\n");
    display(p);
    p = append_end(p,10);//尾插
    printf("Append_end:\n");
    display(p);
    p = delnode(p,3);//删除索引位置3上的数
    printf("Delnode:\n");
    display(p);
    int index = selectElem(p,6);//查
    printf("6在链表的第%d结点:\n",index);
    p = insertnode(p,100,5);//插入
    printf("Insertnode:\n");
    display(p);
    p = change_index(p,5,5);//定改
    printf("Change_index:\n");
    display(p);
    return 0;
}