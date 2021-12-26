#include"stdio.h"
int main(){
    int *pNumber = (int*) malloc(25*sizeof(int));
    int i,j;
    for(i=0;i<10;i++){
    	scanf("%d",&(*(pNumber+i)));		
	}
    for(j=0;j<10;j++){
    	printf("%d",*(pNumber+j));
	}
    return 0;
}
