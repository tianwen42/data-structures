#include"stdio.h"
int main(void){

int arry[3][2][2]={1,2,3,4,5,6,7,8,9,10,11,12};
//{{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}}
int j=0;
int size = sizeof(arry)/sizeof(int);
int *p;
for(p=arry;j<12;j++,p++){
	printf("%d\n",*p);
}
printf("sizeof%d\n",size);
test(arry,size);

}
int test(int arry[],int size){
	printf("this is a test\n");
	int i=0;
	int *ptest;
	for(ptest=arry;i<size;i++,ptest++){
		printf("%d\n",*ptest);
	}
}