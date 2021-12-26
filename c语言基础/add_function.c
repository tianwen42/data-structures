#include"stdio.h"
int add(){
	int arry[5];
	int total=0;
	int i,j;
	for(i=0;i<5;i++){
		scanf("%d",&arry[i]);
	}
	for(j=0;j<(sizeof(arry)/sizeof(int));j++){
		total += arry[j];
	}
	printf("%d",total);
	return total;
	}




int main(void){
	int a;
	float b;
	double c;
	char d;
	printf("%ld",type(a*b+c-d));
	return 0;
}
