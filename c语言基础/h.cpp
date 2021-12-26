#include<stdio.h>

int max(int a, int b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int func(void){
	int a, b;
	a = 1;
	b = 2;
	printf("%d %d\n",++a+b,++b+a);
	return 0;
}

int function()
{
	int array[10];
	for(int i=0; i<10;i++){
		array[i]=i;
	}
	for(int i=0; i<10; i++){
		printf("%d\n",array[i]);
	}
	return 0;
}

int main(void){
	int number;
	number = 1?(0?(3:2)):(10?(1:0));
	printf("%d\n",number);
	return 0;
}


