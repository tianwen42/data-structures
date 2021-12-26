#include"stdio.h"
#include"stdlib.h"

struct Student {
    char name[10];
    struct Student *next;
};

int main(int argc){
    struct Student s1 = { "yang" , NULL};
    struct Student s2 = { "yan" , NULL};
    struct Student s3 = { "ya" , NULL};
    struct Student s4 = { "y" , NULL};

    s1.next = &s2;
    s2.next = &s3;
    s3.next = &s4;

    struct Student *p1;
    p1 = &s1;
    while(1){
        printf("%s\n", p1->name);
        if(p1->next!=NULL){
            p1 = p1->next;
        }else{
            break;
        }
    }
}