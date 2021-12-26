#include"stdio.h"
unsigned long long factorial(unsigned long long);

int main(void){
	unsigned long long number =0LL;
	printf("enter an interger");
	scanf("%llu",&number);
	printf("the factorial of %llu is %llu\n", number, factorial(number));
	return 0;
	 
}

unsigned long long factorial(unsigned long long n){
	if(n<2LL)
		return n;
	return n*factorial(n-1LL);
}
