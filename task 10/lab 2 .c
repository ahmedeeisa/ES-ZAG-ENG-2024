#include<stdio.h>
int Fun( int x, int y  , int*ptr1 ,int*ptr2 ) ;
int main (){
 int n1 ,n2 ;
 int sum,sub ;
 printf (" enter  two numbers to sum & sub ") ;
 scanf("%d", &n1 ) ;
 scanf("%d", &n2  ) ;
 Fun( n1, n2 , & sum , & sub  ) ;
 printf (" The sum of two numbers is %d   \n ", sum );
 printf (" The sub of two numbers is %d   \n ", sub );
}
int Fun( int x , int y  , int*ptr1 ,int*ptr2 )
{
  *ptr1 = ( x + y)  ;
  *ptr2 = ( x - y) ;
}
