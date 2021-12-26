#include <stdio.h>
/*
 @function: bubble_sort_one
 @functional: bubble sort
 @order for parameter value, 1 is ascending and 0 is descending
 */
static int bubble_sort_one(int order)
{
    int arry[] = {12, 13, 5, 3, 14, 90, 0, 11, 23, 9, 15, 99, 100, 96};
    int i = 0, j = 0;
    int temp = 0;
    int number_of_times = 0;
    int arry_length = sizeof(arry)/sizeof(int);

    for(i = 0; i < arry_length; i++)
        printf("%d ", arry[i]);
    printf("\n");

    if (order == 1) { /*ascending order*/
        for(i = 0; i < arry_length - 1; i++) {
            for(j = 0; j < arry_length -1; j++) {
                if (arry[j] > arry[j+1]) {
                    temp = arry[j];
                    arry[j] = arry[j+1];
                    arry[j+1] = temp;
                }
                number_of_times++;
            }
        }
    } else { /*descending order*/
        for(i = 0; i < arry_length - 1; i++) {
            for(j = 0; j < arry_length - 1; j++) {
                if (arry[j] < arry[j+1]) {
                    temp = arry[j];
                    arry[j] = arry[j+1];
                    arry[j+1] = temp;
                }
                number_of_times++;
            }
        }
    }

    printf("i = %d,j = %d\n",i,j);
    for(i = 0; i < arry_length; i++)
        printf("%d ", arry[i]);
    printf("\n");
    printf("bubble_sort_one: number of times = %d\n\n", number_of_times);
    return 0;
}

/*
 @function: bubble_sort_two
 @functional: bubble sort
 @order for parameter value, 1 is ascending and 0 is descending
 */
static int bubble_sort_two(int order)
{
    int arry[] = {12, 13, 5, 3, 14, 90, 0, 11, 23, 9, 15, 99, 100, 96};
    int i = 0, j = 0;
    int temp = 0;
    int number_of_times = 0;
    int arry_length = sizeof(arry)/sizeof(int);

    for(i = 0; i < arry_length; i++)
        printf("%d ", arry[i]);
    printf("\n");

    if (order == 1) { /*ascending order*/
        for(i = 0; i < arry_length - 1; i++) {
            for(j = 0; j < arry_length - (i + 1); j++) {
                if (arry[j] > arry[j+1]) {
                    temp = arry[j];
                    arry[j] = arry[j+1];
                    arry[j+1] = temp;
                }
                number_of_times++;
            }
        }
    } else { /*descending order*/
        for(i = 0; i < arry_length - 1; i++) {
            for(j = 0; j < arry_length - (i+1); j++) {
                if (arry[j] < arry[j+1]) {
                    temp = arry[j];
                    arry[j] = arry[j+1];
                    arry[j+1] = temp;
                }
                number_of_times++;
            }
        }
    }

    printf("i = %d,j = %d\n",i,j);
    for(i = 0; i < arry_length; i++)
        printf("%d ", arry[i]);
    printf("\n");
    printf("bubble_sort_two: number of times = %d\n\n", number_of_times);
    return 0;
}

/*
 @function: bubble_sort_three
 @functional: bubble sort
 @order for parameter value, 1 is ascending and 0 is descending
 */
static int bubble_sort_three(int order)
{
    int arry[] = {12, 13, 5, 3, 14, 90, 0, 11, 23, 9, 15, 99, 100, 96};
    int i = 0, j = 0;
    int temp = 0;
    int number_of_times = 0;
    int swap_flag = 0;
    int arry_length = sizeof(arry)/sizeof(int);

    for(i = 0; i < arry_length; i++)
        printf("%d ", arry[i]);
    printf("\n");

    if (order == 1) { /*ascending order*/
        for(i = 0; i < arry_length - 1; i++) {
            swap_flag = 0;
            for(j = arry_length - 1; j > i; j--) {
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
        for(i = 0; i < arry_length - i; i++) {
            swap_flag = 0;
            for(j = arry_length - 1; j > i; j--) {
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
    for(i = 0; i < arry_length; i++)
        printf("%d ", arry[i]);
    printf("\n");
    printf("bubble_sort_three: number of times = %d\n\n", number_of_times);
    return 0;
}

int main(void)
{
    bubble_sort_one(1);
    bubble_sort_two(1);
    bubble_sort_three(1);
    return 0;
}
