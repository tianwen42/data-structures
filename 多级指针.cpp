#include"stdio.h"

void test(int **p,int *a){
	printf("&(**p)=%d, **p=%d ,&(*p)=%d, *p=%d ,p=%d , &p=%d",&(**p),**p,&(*p),*p,p,&p);
    printf("\n");
    printf("&a%d",a);
}
int main(){
    int a = 12;
    int *p = NULL;
    p = &a;
    printf("*p=%d, p=%d, &(*p)=%d",*p,p,&(*p));
    printf("\n");
    test(&p,&a);
    return 0;
}
