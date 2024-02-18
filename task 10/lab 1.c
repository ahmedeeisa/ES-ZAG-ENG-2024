#include<stdio.h>
int main(){
    int x =10 ;
    printf (" the num is %d   \n ", x );
    int *ptr = &x ;
    *ptr = 20 ;
     printf (" the num after changing  is %d ", *ptr );
     return 0 ;
}
