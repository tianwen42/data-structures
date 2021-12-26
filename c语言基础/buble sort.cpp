#include <stdio.h>
#define N 15
int main(void)
{
	int a[N] = {15,14,13,12,11,10,9,8,3,7,5,4,2,6,1};
	int i, j, temp;
	for(i = 0; i < N-1; i++)
	{
		for(j = 0; j < N-i-1; j++)
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
	}
	printf("\n排序结果:\n");
	for(i = 0; i < N; i++)
		printf("%3d", a[i]);
	printf("\n");
	return 0;
}

