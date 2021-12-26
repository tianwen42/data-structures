#include<stdio.h>
//阳林
int choose_sort(int *array, int lenth,int mode){
    int i, j,tmp;
    if(mode==0){
        for (size_t i = 0; i < lenth; i++){
            int min = i;
            for(size_t j = i+1; j<lenth; j++){
                if (array[min] > array[j]){
                    min = j;
                }
            }
            tmp = array[min];
            array[min] = array[i];
            array[i] = tmp;
        }
    }else if (mode==1)
    {
        for (size_t i = 0; i < lenth; i++){
            int max = i;
            for(size_t j = i+1; j<lenth; j++){
                if (array[max] < array[j]){
                    max = j;
                }
            }
            tmp = array[max];
            array[max] = array[i];
            array[i] = tmp;
        }
    }
    return 0;
}

int bubble_sort(int *array,int lenth){
    int i;
    for (size_t i = 0; i < lenth; i++){
        for(size_t i=0; i<lenth; i++){
            int tmp = 0;
            int j=i+1;
            if(array[i] > array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    return 0;

}

int test(void){
    int array2[10]={1,8,9,4,3,6,7,5,10,2};
    int lenth = 10;
    int i;
    choose_sort(array2,lenth,1);
    printf("in testfunc:");
    for(i=0; i<lenth; i++){
        printf("%d ", array2[i]);
    }
    return 0;
}


int main(void)
{
    int array[10]={1,8,9,4,3,6,7,5,10,2};
    int lenth = sizeof(array)/sizeof(int);
    int i,j;
    printf("the start arry:");
    for (size_t i = 0; i < lenth; i++)
        printf("%d ",array[i]);
    printf("\n");
    bubble_sort(array,lenth);     //冒泡
    printf("after bubble_sort arry:");
    for (size_t i = 0; i < lenth; i++)
        printf("%d ",array[i]);
    printf("\n");
    //test();
    //调试
    choose_sort(array,lenth,1);        //选择
    printf("after choose_sort:");
    for (size_t i = 0; i < lenth; i++)
        printf("%d ",array[i]);

    return 0;

}

