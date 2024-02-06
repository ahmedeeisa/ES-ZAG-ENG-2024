#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a , b , c ;
    printf(" enter numbers a b c  :  ");
    scanf (" %d %d %d " ,  &a , &b  , &c );
    // find max number
    if( a>=b && a>=c )
   printf("the max number is : %d ", a );
   if( b>=a && b>=c )
   printf("the max number is : %d ", b );
   if( c>=a && c>=b )
   printf("the max number is : %d ", c );
   return 0 ;
}
