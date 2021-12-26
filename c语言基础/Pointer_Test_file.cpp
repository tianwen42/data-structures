#include <stdio.h>
#include <stdlib.h>

int test1(){
    int arr[] = { 99, 15, 100, 888, 252 };
    int i, *p = arr, len = sizeof(arr) / sizeof(int);
    for(i=0; i<3; i++){
        printf("%d  ", *++p );  //++p取n+1的值,p++取n的值
    }
    printf("\n");
    return 0;
}

int *func(){    //函数返回指针
	int n = 100;
	return &n;
}

int test2(){
    int *p = func(), n;
    printf("c.biancheng.net\n");
    n = *p;
    printf("value = %d\n", n);//func函数结束后n值被放弃，后面的代码可以随意使用这块内存
    return 0;
}

int pointer_exchange(void){
	int a=1,b=2,temp;
	int *p1=&a, *p2=&b;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("a%d,b%d\n",a,b);
}

int main(void){
	pointer_exchange();
	test1();
	test2();
	return 0;
}