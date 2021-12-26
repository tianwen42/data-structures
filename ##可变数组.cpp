#include"free_Array.h"
#include"stdio.h"
#include"stdlib.h"

const int BLOCK_SIZE =20;
Array array_create(int init_size){
    Array A;
    A.size=init_size;
    A.array=(int*)malloc(sizeof(int)*A.size);
    return A;
}

void array_free(Array *array){
    free(array->array);
    array->array=NULL;
    array->size=0;
}

int array_size(const Array *array){
    return array->size;
}

int* array_at(Array *array, int index){
    if(array->size < index){
        array_inflate(array, (index/BLOCK_SIZE+1)*BLOCK_SIZE-array->size);
    }
    return &(array->array[index]);
}
void array_inflate(Array *array, int more_size){
    int *p=(int*)malloc(sizeof(int) * (more_size + array->size));
    int i;
    for(i=0;i<(array->size);i++){
        p[i] = array->array[i];
    }
    free(array->array);
    array->array = p;
    array->size += more_size;
}

int main(int argc, char** argv){
    int i;
    Array a = array_create(100);
    *array_at(&a, 0)=9;
    printf("%d\n",array_size(&a));
    printf("%d\n",*array_at(&a, 0));
    array_inflate(&a,100);
    printf("%d\n",array_size(&a));
}