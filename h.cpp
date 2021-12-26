# include"stdio.h"

int F(int n){
    if(n==0 || n==1){
        return 1;
    }else if (n == 2){
        return 0;
    }else{return F(n-1)-2*F(n-2)+F(n-3);}
}


int main(int argc, char **){
    int n,i;
    int array[15];
    for(i=0;i<15;i++){
        array[i]=F(i);
    }
    for(i=0;i<sizeof(array)/sizeof(int);i++){
        printf("%d ",array[i]);
    }

}