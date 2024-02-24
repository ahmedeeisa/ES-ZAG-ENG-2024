#include <stdio.h>
struct item{
    float x;
    float y ;
};
 float func(struct item  c , struct item  d ){
    float result ;
    result =(c.x + d.x) * ( c.y + d.y );
    return result;
}

int main() {
    float r , n ,m ;
    struct item A;
    printf("enter the quantity of the item  : \n");
    scanf("%f",&A.x);
    printf("enter the price of the item  : \n");
    scanf("%f",&A.y);
    struct item b ;
printf("enter the  increment in quantity of the item  : \n");
scanf("%f",&b.x);
printf("enter the  increment in price of the item  : \n");
 scanf("%f",&b.y);
 r = func(A,b );
 n = A.x+ b.x ;
 m = A.y + b.y ;
 printf(" the new quantity of the item is : %f  \n  ", n ) ;
 printf(" the new price  of the item is : %f \n  ", m  ) ;
 printf(" the new value of the item is : %f  ", r ) ;

    return 0;
}
