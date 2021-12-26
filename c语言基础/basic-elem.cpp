#include"stdio.h"
#include"stdlib.h"
#define maxsize 20


typedef struct {
    int data[maxsize]={0};
    int length = 0;
} SeqList;

//初始化
int CreateList(SeqList *L, int a[], int n) {
    if(n>maxsize){
        printf("空间不够，无法初始化\n");
    }
    for (int i = 0; i < n; i++)
        L->data[i] = a[i];
    L->length = n;
    return 1;
}

int Length(SeqList *L) {
    return L->length;
}

//取
int Get(SeqList *L, int i) {
    if (i < 0 || i > L->length) {
        printf("查找位置非法，查找失败\n");
        return 0;
    } else {
        return L->data[i];
    }
}

//插入
int Insert(SeqList *L, int i, int e) {
    if (L->length >= maxsize) {
        printf("内存不足\n");
        return 0;
    }
    if (i < 0 || i > L->length) {
        printf("%d",i);
        printf("位置错误，插入失败\n");
        return 0;
    }
    if (i == 0)//边界值处理
    {
        L->data[1] = L->data[0];
    }
    for (int j = L->length; j >= i; j--) {
        L->data[j] = L->data[j - 1];
    }
    L->data[i] = e;
    L->length++;
    return 1;
}

//遍历
void PrintList(SeqList *L) {
    for (int i = 0; i < L->length; i++){
        printf("%d ", L->data[i]);
    }
}

//合并
int MergeList(SeqList LA, SeqList LB,SeqList &LC){
    int LA_len = Length(&LA);
    int LB_len = Length(&LB);
    int i=0, j=0;
    int index = 0;    
    while((i<LA_len) && (j<LB_len)){    
        int ea = Get(&LA, i);
        int eb = Get(&LB, j);
        if(ea < eb){
            Insert(&LC,index++,ea);
            i++;
        }
        else if(ea==eb){      //避免重复值
            Insert(&LC,index++,ea);
            i++;
            j++;
        }
        else {
            Insert(&LC,index++,eb);
            j++;
        }
        PrintList(&LC);
        printf("\n");
    }
    while(i<LA_len){       //继续遍历
        int ea = Get(&LA, i);
        Insert(&LC,index++,ea);
        i++;
        PrintList(&LC);
        printf("\n");
    }
    while(j<LB_len){
        int eb = Get(&LB, j);
        Insert(&LC,index++,eb);
        j++;
        PrintList(&LC);
        printf("\n");
        
    }
    return 1;
}

int main() {
    SeqList LA,LB,LC;
    int a[5] = {3,5,8,11};
    int b[7] = {2,6,8,9,11,15,20};
    CreateList(&LA, a, 4);
    CreateList(&LB,b,7);
    printf("LA:");
    PrintList(&LA);
    printf("\nLB:");
    PrintList(&LB);
    printf("\n");
//    PrintList(&LC);
//    printf("%d\n",Length(&LC));
    MergeList(LA,LB,LC);
    printf("LC:");
    printf("长度%d\n",Length(&LC));
    PrintList(&LC);
    printf("\n");
//    Insert(&LA,0,10);
//    PrintList(&LA);
//    printf("%d\n",Get(&LB,5));
    return 0;
}




