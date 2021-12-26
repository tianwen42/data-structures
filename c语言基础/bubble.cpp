#include "stdio.h"
//阳林

int search(int  arry[],int size, int target){
	/*折半&二分查找*/
	int min = 0;
	int max = size;
	int mid ;

	printf("start_max:%d\n",max);
	while(min<=max){
		mid = (min+max)/2;
		if(arry[mid]==target){
			break;
		}else if(arry[mid]>target){
			max = mid - 1;
		}else{
			min = mid +1;
		}
	}
    int index = mid+1;
	printf("max:%d\n",max);
	printf("min:%d\n",min);
	printf("%d在arry的第%d位",target,index);
	return 0;
}

static int bubble_sort_three(int order)
{	int arry[] = {10, 20, 90, 30, 70, 60, 80 , 0, 110, 40, 50, 120, 130, 100};
    int i = 0, j = 0;
    int temp = 0;
    int target = 0;
    int number_of_times = 0;
    int swap_flag = 0;
    int size = sizeof(arry)/sizeof(int);     //14
	printf("arrylength:%d\n",size);

    for(i = 0; i < size; i++){
		printf("%d ", arry[i]);
	}
    printf("\n");

    if (order == 1) { /*ascending order*/
        for(i = 0; i < size - 1; i++) {
            swap_flag = 0;
            for(j = size - 1; j > i; j--) {
                if (arry[j - 1] > arry[j]) {
                    temp = arry[j - 1];
                    arry[j - 1] = arry[j];
                    arry[j] = temp;
                    swap_flag = 1;
                }
                number_of_times++;
            }
            if (!swap_flag)
                break;
        }
    } else { /*descending order*/
        for(i = 0; i < size - i; i++) {
            swap_flag = 0;
            for(j = size - 1; j > i; j--) {
                if (arry[j-1] < arry[j]) {
                    temp = arry[j - 1];
                    arry[j-1] = arry[j];
                    arry[j] = temp;
                    swap_flag = 1;
                }
                number_of_times++;
            }
            if (!swap_flag)
                break;
        }
    }

    printf("i = %d,j = %d\n",i,j);
    for(i = 0; i < size; i++){
        printf("%d ", arry[i]);
	}
    printf("\n");
    printf("bubble_sort_three: number of times = %d\n\n", number_of_times);
    printf("please input a target:\n");    //0 3 5 9 11 12 13 14 15 23 90 96 99 100
    scanf("%d",&target);
    search(arry,size,target);   //二分查找
    //print("\n");
	return 0;
}


int main(void){
	bubble_sort_three(1);
	return 0;
}

