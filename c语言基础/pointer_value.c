#include"stdio.h"
int main(void)
{	int a[3][3]={
					{10,9,8},
					{7,6,5},
					{4,3,2}
				};
	int i;
	for(i=0;i<5;i++){
		printf("%d ",*(*a + i)) ;
	}
	printf("\n") ;
	for(i=0;i<3;i++){
		printf("%d ",**(a + i));
	}
	/* code */
	return 0;
}