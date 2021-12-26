#include"stdio.h"

void printout(unsigned int x){
    void printdight(int);
    if(x>=10)
        printout(x / 10);
    printdight(x % 10);
    //printf("%d ", x % 10);
}

void printdight(int x){
    printf("%d ", x);
}

int main(void){
    printout(76234);
    return 0;
}