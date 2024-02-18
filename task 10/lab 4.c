# include <stdio.h>
unsigned int Factorial ( unsigned int num );
int main()
 {
      unsigned int n , fact  ;
    printf ("Enter the number to factorial it :   ");
     scanf ( " %i " , &n );
     printf ( "  the number is  %i  \n ", n ) ;
       fact =   Factorial ( n )  ;
     printf ("the factorial of the number  is %i \n ",  fact );
     return 0;

}
unsigned int Factorial ( unsigned int num )
{
unsigned int factorial = 0 ;
if ( num == 0 ){

    factorial = 1 ;
}
else {
    factorial = num *  Factorial(num -1) ;
}
return factorial ;
}
